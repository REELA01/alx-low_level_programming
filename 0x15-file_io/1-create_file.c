#include "main.h"
/**
 * _strlen - the same function
 * @s: parameter
 * Return: length
*/
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}
/**
 * create_file - create file
 * @filename: parameter
 * @text_content: tne buffer
 * Return: 1 on success, -1 on failure
*/
int create_file(const char *filename, char *text_content)
{
	ssize_t w;
	int fd;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content)
	{
		w = write (fd, text_content, _strlen(text_content));
		if (w == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
