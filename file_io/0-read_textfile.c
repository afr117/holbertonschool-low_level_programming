#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include "main.h"

ssize_t read_textfile(const char *filename, size_t letters)
{
    int fd, n;
    char *buffer;

    if (filename == NULL)
        return (0);

    buffer = malloc(sizeof(char) * letters);
    if (buffer == NULL)
        return (0);

    fd = open(filename, O_RDONLY);
    if (fd == -1)
    {
        free(buffer);
        return (0);
    }

    n = read(fd, buffer, letters);
    if (n == -1)
    {
        free(buffer);
        close(fd);
        return (0);
    }

    n = write(STDOUT_FILENO, buffer, n);
    if (n == -1 || (int)letters != n)
    {
        free(buffer);
        close(fd);
        return (0);
    }

    free(buffer);
    close(fd);
    return (n);
}

