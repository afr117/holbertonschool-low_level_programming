#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#define BUFFER_SIZE 1024

/**
 * check_args - Checks and handles command line arguments.
 * @argc: Argument count.
 * @argv: Argument vector.
 */
void check_args(int argc, char *argv[])
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}
}

/**
 * open_files - Opens source and destination files.
 * @argv: Argument vector.
 * @file_from: Pointer to source file descriptor.
 * @file_to: Pointer to destination file descriptor.
 * @old_mask: Previous mask to be restored later.
 */
void open_files(char *argv[], int *file_from, int *file_to, mode_t *old_mask)
{
	*file_from = open(argv[1], O_RDONLY);
	if (*file_from < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	*old_mask = umask(0);
	*file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (*file_to < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close(*file_from);
		exit(99);
	}

	umask(*old_mask);
}

/**
 * copy_content - Copies content from source to destination.
 * @file_from: Source file descriptor.
 * @file_to: Destination file descriptor.
 * @argv: Argument vector.
 */
void copy_content(int file_from, int file_to, char *argv[])
{
	char buffer[BUFFER_SIZE];
	ssize_t bytes_read, bytes_written;

	while ((bytes_read = read(file_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(file_to, buffer, bytes_read);
		if (bytes_written != bytes_read)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(file_from);
			close(file_to);
			exit(99);
		}
	}

	if (bytes_read < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
}

/**
 * main - Main function.
 * @argc: Argument count.
 * @argv: Argument vector.
 * Return: 0 on success, or an error code on failure.
 */
int main(int argc, char *argv[])
{
	int file_from, file_to;
	mode_t old_mask;

	check_args(argc, argv);
	open_files(argv, &file_from, &file_to, &old_mask);
	copy_content(file_from, file_to, argv);

	if (close(file_from) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}

	if (close(file_to) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}

	return (0);
}
