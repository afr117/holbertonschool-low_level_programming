#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <unistd.h>
#include <string.h>

/**
 * create_file - Creates a file with the specified name and content
 * @filename: The name of the file to create
 * @text_content: The content to write to the file (NULL terminated string)
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int file_descriptor, write_result;
	mode_t permissions = S_IRUSR | S_IWUSR;

	if (filename == NULL)
		return (-1);

	file_descriptor = open(filename, O_CREAT | O_WRONLY | O_TRUNC, permissions);
	if (file_descriptor == -1)
		return (-1);

	if (text_content != NULL)
	{
		write_result = write(file_descriptor, text_content, strlen(text_content));
		if (write_result == -1)
		{
			close(file_descriptor);
			return (-1);
		}
	}

	close(file_descriptor);
	return (1);
}

