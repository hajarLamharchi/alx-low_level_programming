#include "main.h"

/**
 * create_file - create a file
 * @filename: name of the file to create
 * @text_content: the content to write in the file
 * Return: 1 on success -1 otherwise
 */

int create_file(const char *filename, char *text_content)
{
	ssize_t fd;
	ssize_t w;
	int len;

	if (filename == NULL)
	{
		return (-1);
	}
	len = strlen(text_content);
	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	w = write(fd, text_content, len);
	if (fd == -1 || w == -1)
	{
		return (-1);
	}
	close(fd);
	return (1);
}
