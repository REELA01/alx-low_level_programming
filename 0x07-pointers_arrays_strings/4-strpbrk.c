#include "main.h"
/**
 * *_strpbrk - strings
 * @s: parameter
 * @accept: parameter
 * Return: count value
*/
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;
	char *count;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept(j))
			{
				count = &s[i];
				return (count);
			}
		}
	}
	return (0);
}
