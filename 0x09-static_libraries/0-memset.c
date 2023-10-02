#include "main.h"
/**
 * *_memset - copy size n strings
 * @s: the sring
 * @b: parameter
 * @n: parameter
 * Return: s value
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int t;

	for (t = 0; n > 0; t++, n--)
	{
		s[t] = b;
	}
	return (s);
}
