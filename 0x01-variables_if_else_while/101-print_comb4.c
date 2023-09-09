#include <stdio.h>
/**
 * main - Entry point
 * Description: combnation
 * Return: 0 success
*/
int main(void)
{
	int n, m, r;

	for (n = 0 ; n <= 9 ; n++)
	{
		for (m = n + 1 ; n <= 9 ; m++)
		{
			for (r = m + 1 ; r <= 9 ; r++)
			{
				putchar(n + '0');
				putchar(m + '0');
				putchar(r + '0');
				if (m + n + r  == 24)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

