#include <stdio.h>
/**
 * main - Entry point
 * description: fibonaci
 * Return: 0 success
*/
int main(void)
{
	int m, n1 = 0, n2 = 1, n3;

	for (m = 0 ; m < 50 ; m++)
	{
		n3 = n1 + n2;
		printf("%d", n3);
		n1 = n2;
		n2 = n3;
		if (m == 49)
		printf("\n");
		else
		printf(", ");
	}
	return (0);
}
