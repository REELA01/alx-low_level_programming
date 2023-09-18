#include "main.h"
/**
 * print_rev - takes a pointer to char
 * @s: parameter
 * Return: nothing
*/
void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	while (i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
