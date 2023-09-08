#include <stdio.h>
/**
 * main - Entry point
 * Descripition: hex
 * Return: 0 (success)
*/
int main(void)
{
	int n = 0;
	char c = 'a';

	while (n <= 9)
	{
		putchar(n + '0');
		n++;
	}
	while (c <= 'f')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
