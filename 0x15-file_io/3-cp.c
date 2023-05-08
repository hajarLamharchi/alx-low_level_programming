#include "main.h"
/**
 * main - copies the content of a file to another file
 * @ac: argc
 * @av: argv
 * Return: Always 0
 */
int main(int ac, char *av[])
{
	char *buf_from, *buf_to, buffer[1024];
	int fd_from, fd_to, len_from, len_to, r, w;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	len_from = strlen(av[1]) + 1;
	len_to = strlen(av[2]) + 1;
	buf_from = malloc(sizeof(char) * len_from);
	buf_to = malloc(sizeof(char) * len_to);
	strncpy(buf_from, av[1], len_from);
	strncpy(buf_to, av[2], len_to);
	fd_from = open(buf_from, O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", buf_from);
		exit(98);
	}
	fd_to = open(buf_to, O_RDWR | O_TRUNC | O_CREAT, 0664);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", buf_to);
		exit(99);
	}
	while ((r = read(fd_from, buffer, 1024)) > 0)
		w = write(fd_to, buffer, r);
	if (r == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", buf_from);
		exit(98);
	}
	w = write(fd_to, buf_from, 1024);
	if (w == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", buf_to);
		exit(99);
	}
	if (close(fd_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d%d\n", fd_from, fd_to);
		exit(100);
	}
	if (close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d%d\n", fd_from, fd_to);
		exit(100);
	}
	free(buf_from);
	free(buf_to);
	return (0);
}
