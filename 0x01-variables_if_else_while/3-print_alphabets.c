#include <stdio.h>
/**
 * main -Entry point
 * description: print letters
 * return: 0 (success)
*/
int main(void)
{
	char n = 'a', m = 'A';

	while (n <= 'z')
	{
		putchar(n);
		n++;
	}
	while (m <= 'Z')
	{
		putchar(m);
		m++
	}
	putchar('\n');
	return (0);
}
