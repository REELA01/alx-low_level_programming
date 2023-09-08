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
		do {
			m = n + 1;
			putchar(n + '0');
			putchar(m + '0');
			putchar(',');
			putchar(' ');
			m++;
		} while (m <= 9);
	putchar('\n');
	return (0);
}
