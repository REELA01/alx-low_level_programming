#include "main.h"
/**
 * print_times_table - print table
 * @n: paramater to check
 * Return: 0 success
*/
void print_times_table(int n)
{
	int d, m, result;

	if (n <= 15 && n >= 0)
	{
		for (d = 0; d <= n; d++)
		{
			_putchar('0');

			for (m = 1; m <= n; m++)
			{
				_putchar(',');
				_putchar(' ');
				result = d * m;
				if (result <= 9)
					_putchar(' ');

				if (result <= 99)
					_putchar(' ');
				if (result >= 100)
				{
					_putchar((result / 100) + '0');
					_putchar((result / 10) % 10 + '0');
				}
				else if (result <= 99 && result >= 10)
					_putchar((result / 10) + '0');
				_putchar((result % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
