#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: file input
 * @text_content: the content to append
 * Return: 1 on success -1 otherwise
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, w, len;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		return (-1);
	}
	len = strlen(text_content);
	fd = open(filename, O_WRONLY | O_APPEND);
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
	if (close(fd) == -1)
	{
		return (-1);
	}
	return (1);
}
