#include "stdio.h"
/**
 * main - Entry point
 * description: all mutliplr tp 1024
 * Return: 0 success
*/
int main(void)
{
	int n, count;

	for (n = 0 ; n <= 1024 ; n++)
	{
		if ((n % 3) == 0 || (n % 5) == 0)
		count = count + n;
	}
	printf("%d\n", count);
	return (0);
}
