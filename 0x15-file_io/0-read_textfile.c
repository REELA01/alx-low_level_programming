#include "main.h"
/**
 * read_textfile - read from file
 * @filename: name of the file
 * @letters: to the text
 * Return: thw file
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	int R, W, fd;

	buffer = malloc(sizeof(char) * letters);
	if (filename == NULL)
		return (0);
	if (buffer == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	R = read(fd, buffer, letters);
	W = write(STDOUT_FILENO, buffer, R);
	if (fd == -1 || R == -1 || W == -1 || R != W)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	close(fd);
	return (W);
}
