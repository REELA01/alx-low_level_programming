#include "main.h"
/**
 * print_alphabet_x10 - to print alaphanet 10 times
 * Return: 0 (success)
*/
void print_alphabet_x10(void)
{
	int n, m;

	for (m = 0; m <= 9; m++)
	{
		for (n = 'a'; n <= 'z'; n++)
			_putchar(n);
		_putchar('\n');
	}
}
