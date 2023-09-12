#include "main.h"
/**
 * print_alphabet - print char
 * Return: 0 (success)
 */
void print_alphabet(void)
{
	int a;

	for (a = 'a' ; a <= 'z' ; a++)
		_putchar(a);
	_putchar('\n');
	return (0);
}
