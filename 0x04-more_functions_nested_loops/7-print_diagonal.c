#include "main.h"
/**
 * print_diagonal - prints diagonal
 * @n: num
*/
void print_diagonal(int n)
{
	int i, s;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 1; i <= n; i++)
		{
			for (s = 1; s <= n; s++)
			{
				if (s == i)
					_putchar('\\');
				else if (s < i)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
