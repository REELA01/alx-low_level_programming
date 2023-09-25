#include "main.h"
/**
 * *_strchr - find charechter
 * @s: parameter
 * @c: parameter
 * Return: c address in s
*/
char *_strchr(char *s, char c)
{
	int t;

	for (t = 0; s[t] >= '\0'; t++)
	{
		if (s[t] == c)
			return (s + t);
	}
	return ('\0');
}
