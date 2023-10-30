#include "main.h"
/**
 * main - copy the content of a file to another
 * @ac: number of argument
 * @av: the files from to
 * Return: int value
*/
int main(int ac, char **av)
{
	int fd_from, fd_to;
	ssize_t  r = 1024, w, close_fd;
	char content[1024];

	if (ac != 3)
	{ dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97); }
	fd_from = open(av[1], O_RDONLY);
	if (fd_from == -1)
	{ dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98); }
	fd_to = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_to == -1)
	{ dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99); }
	while (r == 1024)
	{
		r = read(fd_from, content, 1024);
		if (r == -1)
		{ dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
			exit(98); }
		w = write(fd_to, content, r);
		if (w == -1)
		{ dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			exit(99); }
	}
	close_fd = close(fd_from);
	if (close_fd == -1)
	{ dprintf(STDERR_FILENO, "Error: Can't close fd  %d\n", fd_from);
		exit(100); }
	close_fd = close(fd_to);
	if (close_fd == -1)
	{ dprintf(STDERR_FILENO, "Error: Can't close fd  %d\n", fd_to);
		exit(100); }
	return (0);
}
