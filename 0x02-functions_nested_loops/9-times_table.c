#include "main.h"
/**
 * times_table - do 9x9 table
*/
void times_table(void)
{
	int d, m, result;

	for (d = 0; d <= 9; d++)
	{
		_putchar('0');

		for (m = 1; m <= 9; m++)
	{
		_putchar(',');
		_putchar(' ');
		result = d * m;
		if (result <= 9)
			_putchar(' ');
		else
			_putchar((result / 10) + '0');

		_putchar((result % 10) + '0');
	}
	_putchar('\n');
	}
}
