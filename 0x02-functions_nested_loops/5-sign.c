#include "main.h"
/**
 * print_sign - prints + if n is greater than zero etc
 * @n: the checer
 * Return: 1 if its + int 0 if its 0 -1 if its - int
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
