#include <stdio.h>
/**
 * main - Entry point
 * Description: print lower casess
 * Return: 0 (success)
*/
int main(void)
{
	char n = "a";

	while (n <= 'z')
	{
		if (n == 'q' || n == 'e')
			n++;
		putchar(n);
		n++;
	}
	return (0);
}

