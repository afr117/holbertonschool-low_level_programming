#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include "main.h"

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
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

	while ((n = read(fd, buffer, letters)) > 0)
	{
		if (write(STDOUT_FILENO, buffer, n) != n)
		{
			free(buffer);
			close(fd);
			return (0);
		}

		total += n;

		if (total >= letters)
			break;
	}

	close(fd);
	free(buffer);

	return (total);
}

