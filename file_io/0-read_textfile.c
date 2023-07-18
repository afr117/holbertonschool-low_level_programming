#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to the POSIX standard output.
 * @filename: The name of the file to read.
 * @letters: The number of letters to read and print.
 *
 * Return: The actual number of letters read and printed,
 *         or 0 if there was an error.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
    int fd, stdout_copy;
    size_t n, total = 0;
    char *buffer;

    if (filename == NULL)
        return (0);

    fd = open(filename, O_RDONLY);
    if (fd == -1)
        return (0);

    buffer = malloc(sizeof(char) * (letters + 1));
    if (buffer == NULL)
    {
        close(fd);
        return (0);
    }

    while ((n = read(fd, buffer, letters)) > 0)
    {
        total += n;

        stdout_copy = dup(STDOUT_FILENO);
        if (stdout_copy == -1)
        {
            free(buffer);
            close(fd);
            return (0);
        }

        if (dup2(STDERR_FILENO, STDOUT_FILENO) == -1)
        {
            free(buffer);
            close(fd);
            close(stdout_copy);
            return (0);
        }

        if (write(STDOUT_FILENO, buffer, n) != (ssize_t)n)
        {
            free(buffer);
            close(fd);
            close(stdout_copy);
            return (0);
        }

        if (dup2(stdout_copy, STDOUT_FILENO) == -1)
        {
            free(buffer);
            close(fd);
            close(stdout_copy);
            return (0);
        }

        if (n < letters)
            break;
    }

    close(fd);
    close(stdout_copy);
    free(buffer);

    return (total);
}

