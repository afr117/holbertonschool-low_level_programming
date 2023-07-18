#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include "main.h"

ssize_t read_textfile(const char *filename, size_t letters)
{
    int fd, stdout_copy;
    size_t total = 0;
    char *buffer;
    ssize_t n;

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

    n = read(fd, buffer, letters);
    if (n == -1)
    {
        free(buffer);
        close(fd);
        return (0);
    }

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

    if (write(STDOUT_FILENO, buffer, n) != n)
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

    close(fd);
    close(stdout_copy);
    free(buffer);

    return (total);
}

