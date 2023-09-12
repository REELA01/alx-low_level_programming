#include <stdio.h>
/**
 * main - Entry point
 * description: fibonaci
 * Return: 0 success
*/
int main(void)
{
	int m;
	unsigned long n1 = 0, n2 = 1, sum;

	for (m = 0 ; m < 50 ; m++)
	{
		sum = n1 + n2;
		printf("%lu", sum);
		n1 = n2;
		n2 = sum;
		if (m == 49)
		printf("\n");
		else
		printf(", ");
	}
	return (0);
}
