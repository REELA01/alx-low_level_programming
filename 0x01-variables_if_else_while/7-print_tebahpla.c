#include <stdio.h>
/**
 * main - Entry point
 * Description: lowcase
 * Return: 0 (success)
*/
int main(void)
{
	char n = 'z';

	while (n >= 'a')
	{
		putchar(n);
		n--;
	}
	putchar('\n');
	return (0);
}
