#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file
 * @filename: Name of the file
 * @text_content: Null-terminated string to append to the file
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, res, text_len = 0;

	if (filename == NULL)
		return (-1);

	/* Open the file in write-only mode and append mode */
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		/* Calculate the length of the text content */
		while (text_content[text_len] != '\0')
			text_len++;

		/* Append the text content to the file */
		res = write(fd, text_content, text_len);
		if (res == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}

