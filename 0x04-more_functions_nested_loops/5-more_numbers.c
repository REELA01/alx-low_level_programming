#include "main.h"
/**
 * more_numbers - to print to 14
*/
void more_numbers(void)
{
	int n, m, count;

	for (n = 0; n <= 9; n++)
	{
		for (count = 0; count <= 14; count++)
		{
			m = count;
			if (count > 9)
			{
				_putchar(1 + '0');
				m = count % 10;
			}
			_putchar(m + '0');
		}
		_putchar('\n');
	}
}
