#include "main.h"
/**
 * _strlen - length
 * @s: parameter
 * Return: i value
*/
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	;
	return (i);
}
/**
 * *argstostr - new line each string
 * @ac: parameter
 * @av: parameter
 * Return: cmpt value
*/
char *argstostr(int ac, char **av)
{
	int i, nc = 0, j = 0, cmpt = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++, nc++)
		nc += _strlen(av[i]);
	s = malloc(sizeof(char) * nc + 1);
	if (s == 0)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, cmpt++)
			s[cmpt] = av[i][j];
		s[cmpt] = '\n';
		cmpt++;
	}
	s[cmpt] = '\0';
	return (s);
}
