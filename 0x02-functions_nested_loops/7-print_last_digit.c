#include "main.h"
/**
 * print_last_digit - print the last digit
 * @n: the checher
 * Return: 0 success
*/
int print_last_digit(int n)
{
	int d;

	if (n > 0)
		d = (n % 10);
	else
		d = (-1 * (n % 10));
	_putchar(d + '0');
	return (d);
}
