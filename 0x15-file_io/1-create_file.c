#include "main.h"

/**
 * create_file - create a file
 * @filename: name of the file to create
 * @text_content: the content to write in the file
 * Return: 1 on success -1 otherwise
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t w;
	size_t len;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		len = 0;
	}
	else
	{
		len = strlen(text_content);
	}

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
	{
		return (-1);
	}
	w = write(fd, text_content, len);
	if (w == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
