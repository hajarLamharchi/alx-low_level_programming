#include "main.h"
/**
 * main - copies the content of a file to another file
 * @ac: argc
 * @av: argv
 * Return: Always 0
 */
int main(int ac, char *av[])
{
	char *buf_from = av[1], *buf_to = av[2], buffer[1024];
	int fd_from, fd_to, r, w;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_from = open(buf_from, O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", buf_from);
		exit(98);
	}
	fd_to = open(buf_to, O_WRONLY | O_TRUNC | O_CREAT, 0664);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", buf_to);
		exit(99);
	}
	while ((r = read(fd_from, buffer, 1024)) > 0)
	{
		w = write(fd_to, buffer, r);
		if (w == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", buf_to);
			exit(99);
		}
	}
	if (r == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from %s\n", buf_to);
		exit(98);
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
	return (0);
}
