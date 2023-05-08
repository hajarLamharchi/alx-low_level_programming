#include "main.h"

/**
 * read_textfile - reads a textfile and prints it to the POSIX standard output
 * @filename: the file to read
 * @letters: number of letters it should read and print
 * Return: the actual number of letters it could read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd;
	char *buffer;
	ssize_t w;
	ssize_t r;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	buffer = malloc(sizeof(char) * letters);
	r = read(fd, buffer, letters);
	w = write(STDOUT_FILENO, buffer, r);
	free(buffer);
	close(fd);
	return (w);
}
