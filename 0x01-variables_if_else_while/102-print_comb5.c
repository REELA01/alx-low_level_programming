#include <stdio.h>
/**
 * main - Entry point
 * Description: twice
 * Return: 0 (success)
*/
int main(void)
{
	int n, m;

	for (n = 0 ; n <= 99 ; n++)
	{
		for (m = n + 1 ; m <= 99 ; m++)
		{
			putchar(n + '0');
			putchar(' ');
			putchar(m + '0');
			if (n != 98 && m != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
