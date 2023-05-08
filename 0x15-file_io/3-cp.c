#include "main.h"

/**
 * main - copies the content of a file to another file
 * @ac: argc
 * @av: argv
 * Return: Always 0
 */

int main(int ac, char *av[])
{
	char *buf_from, *buf_to;
	int fd_from, fd_to, len_from, len_to, r, w, c1, c2;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	len_from = strlen(av[1]);
	len_to = strlen(av[2]);
	buf_from = malloc(sizeof(char) * len_from);
	buf_to = malloc(sizeof(char) * len_to);
	buf_from = av[1];
	buf_to = av[2];
	fd_from = open(buf_from, O_RDONLY, 0664);
	fd_to = open(buf_to, O_RDWR | O_TRUNC | O_CREAT, 0664);
	r = read(fd_from, buf_from, len_from);
	if (fd_from == -1 || r == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", buf_from);
		free(buf_from);
		exit(98);
	}
	w = write(fd_to, buf_from, 1024);
	if (fd_to == -1 || w == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", buf_to);
		free(buf_to);
		exit(99);
	}
	c1 = close(fd_from);
	c2 = close(fd_to);
	if (c1 == -1 || c2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d%d\n", fd_from, fd_to);
		exit(100);
	}
	return (0);
}
