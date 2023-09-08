#include <stdio.h>
/**
 * main - Entry point
 * Description: print letters
 * Return: 0 (success)
*/
int main(void)
{
	char n = 'a';
	char m = 'A';

	while (n <= 'z')
	{
		putchar(n);
		n++;
	}
	while (m <= 'Z')
	{
		putchar(m);
		m++;
	}
	putchar('\n');
	return (0);
}
