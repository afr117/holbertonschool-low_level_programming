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
    int fd;
    ssize_t n;
    char buffer[1];

    if (filename == NULL)
        return (0);

    fd = open(filename, O_RDONLY);
    if (fd == -1)
        return (0);

    n = read(fd, buffer, 1);
    while (n > 0 && letters > 0)
    {
        if (write(STDOUT_FILENO, buffer, 1) == -1)
        {
            close(fd);
            return (0);
        }
        n = read(fd, buffer, 1);
        letters--;
    }

    close(fd);

    if (n == -1 || letters > 0)
        return (0);

    return (letters);
}

