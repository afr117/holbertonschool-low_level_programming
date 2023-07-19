#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * error_exit - Prints an error message and exits with the specified code
 * @msg: Error message to print
 * @code: Exit code
 */
void error_exit(const char *msg, int code)
{
    dprintf(STDERR_FILENO, "%s\n", msg);
    exit(code);
}

/**
 * main - Copies the content of one file to another file
 * @argc: Number of arguments
 * @argv: Array of argument strings
 *
 * Return: 0 on success, or exit with error codes
 */
int main(int argc, char *argv[])
{
    int fd_from, fd_to, res;
    char buffer[1024];
    ssize_t bytes_read, bytes_written;

    if (argc != 3)
        error_exit("Usage: cp file_from file_to", 97);

    /* Open the source file for reading */
    fd_from = open(argv[1], O_RDONLY);
    if (fd_from == -1)
        error_exit("Error: Can't read from file", 98);

    /* Open or create the destination file for writing */
    fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
    if (fd_to == -1)
        error_exit("Error: Can't write to file", 99);

    /* Copy the content from source file to destination file */
    while ((bytes_read = read(fd_from, buffer, sizeof(buffer))) > 0)
    {
        bytes_written = write(fd_to, buffer, bytes_read);
        if (bytes_written == -1 || bytes_written != bytes_read)
            error_exit("Error: Can't write to file", 99);
    }

    if (bytes_read == -1)
        error_exit("Error: Can't read from file", 98);

    /* Close file descriptors */
    res = close(fd_from);
    if (res == -1)
        error_exit("Error: Can't close fd", 100);

    res = close(fd_to);
    if (res == -1)
        error_exit("Error: Can't close fd", 100);

    return (0);
}

