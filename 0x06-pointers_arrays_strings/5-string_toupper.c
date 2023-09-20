#include "main.h"
/**
 * *string_toupper - to conert to uppercase
 * @s: string
 * Return: s value
*/
char *string_toupper(char *s)
{
	int i = 0;

	while (s[i++])
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 32;
	}
	return (s);
}
