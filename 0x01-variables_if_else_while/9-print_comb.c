#include <stdio.h>
/**
 * main - Entry point
 * Descripition: comp
 * Return: 0 (success)
*/
int main(void)
{
	int n = 0;

	while (n < 10)
	{
		putchar(n + '0');
		if (n != 9)
		{
			putchar(',');
			putcahr(' ');
		}
		n++;
	}
	putchar('\n');
	return (0);
}
