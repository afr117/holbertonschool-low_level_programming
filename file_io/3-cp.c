#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

void validate_arguments(int argc);
int open_file_from(const char *file_from);
int open_file_to(const char *file_to);
void copy_content(int fd_from, int fd_to);
void close_files(int fd_from, int fd_to);

/**
 * main - Copies the content of one file to another file.
 * @argc: Number of arguments.
 * @argv: Array of argument strings.
 *
 * Return: 0 on success, or exit with error codes.
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to;

	validate_arguments(argc);

	fd_from = open_file_from(argv[1]);

	fd_to = open_file_to(argv[2]);

	copy_content(fd_from, fd_to);

	close_files(fd_from, fd_to);

	return (0);
}

/**
 * validate_arguments - Validates the command-line arguments.
 * @argc: Number of arguments.
 */
void validate_arguments(int argc)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
}

/**
 * open_file_from - Opens the source file for reading.
 * @file_from: Name of the source file.
 *
 * Return: File descriptor of the source file.
 */
int open_file_from(const char *file_from)
{
	int fd_from;

	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}

	return (fd_from);
}

/**
 * open_file_to - Opens or creates the destination file for writing.
 * @file_to: Name of the destination file.
 *
 * Return: File descriptor of the destination file.
 */
int open_file_to(const char *file_to)
{
	int fd_to;

	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", file_to);
		exit(99);
	}

	return (fd_to);
}

/**
 * copy_content - Copies the content from source file to destination file.
 * @fd_from: File descriptor of the source file.
 * @fd_to: File descriptor of the destination file.
 */
void copy_content(int fd_from, int fd_to)
{
	char buffer[1024];
	ssize_t bytes_read, bytes_written;

	while ((bytes_read = read(fd_from, buffer, sizeof(buffer))) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written != bytes_read)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to file\n");
			exit(99);
		}
	}

	if (bytes_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file\n");
		exit(98);
	}
}

/**
 * close_files - Closes the file descriptors.
 * @fd_from: File descriptor of the source file.
 * @fd_to: File descriptor of the destination file.
 */
void close_files(int fd_from, int fd_to)
{
	int res;

	res = close(fd_from);
	if (res == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}

	res = close(fd_to);
	if (res == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}
}

