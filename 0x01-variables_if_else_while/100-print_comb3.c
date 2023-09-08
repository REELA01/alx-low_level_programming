#include <stdio.h>
/**
 * main - Entry point
 * Description: combnation
 * Return: 0 (success)
*/
int main(void)
{
	int n, m;

	for (n = 0 ; n <= 9 ; n++)
	{
		for (m = 1 ; m <= 9 ; m++)
		{
			putchar(n + '0');
			putchar(m + '0');
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
