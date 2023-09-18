#include "main.h"
/**
 * _puts - takes a pointer to char
 * @str: parameter
 * Return: nothing
*/
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str + 0);
		str++;
	}
	_putchar('\n');
}
