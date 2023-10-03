#include "main.h"
/**
 * _strlen - length of string
 * @s: parameter
 * Return: size value
*/
int _strlen(char *s)
{
	int size;

	for (size = 0; s[size] != '\0'; size++)
	;
	return (size);
}
/**
 * *str_concat - contact strings
 * @s1: parameter
 * @s2: parameter
 * Return: m value
*/
char *str_concat(char *s1, char *s2)
{
	int si1, si2, i;
	char *m;

	if (s1 == NULL)
		s1 = '\0';
	if (s2 == NULL)
		s2 = '\0';
	si1 = _strlen(s1);
	si2 = _strlen(s2);
	m = malloc((si1 + si2) * sizeof(*s1) + 1);
	if (m == 0)
		return (0);
	for (i = 0; i <= si1 + si2; i++)
	{
		if (i < si1)
			m[i] = s1[i];
		else
			m[i] = s2[i - si1];
	}
	m[i] = '\0';
	return (m);
}
