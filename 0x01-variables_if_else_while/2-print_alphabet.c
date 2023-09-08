#include <stdio.h>
/**
 * main - Entry point
 * description: writing alpha
 * Return: 0 (Success)
*/
int main(void)
{
	char n = 'a';

	while (n <= 'z')
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
