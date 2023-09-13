#include <stdio.h>
/**
 * numl - the length
 * @n : oprator
 * Return: digits
*/
int numl(int n)
{
	int l = 0;

	if (!n)
		return (1);
	while (n)
	{
		n = n / 10;
		l += 1;
	}
	return (l);
}
/**
 * main - Entry point
 * description: simple fib
 * Return: 0 (success)
*/
int main(void)
{
	int c, i;
	unsigned long f1 = 1, f2 = 2, sum, max = 100000000, f11 = 0, f22 = 0, su1 = 0;

	for (c = 1 ; c <= 98 ; c++)
	{
		if (f11 > 0)
			printf("%lu", f11);
		i = numl(max) - 1 - numl(f1);
		while (f11 > 0 && i > 0)
		{
			printf("%d", 0);
			i--;
		}
		printf("%lu", f1);
		sum = (f1 + f2) % max;
		su1 = f11 + f22 + (f1 + f2) / max;
		f1 = f2;
		f11 = f22;
		f2 = sum;
		f22 = su1;
		if (c != 98)
			printf(", ");
		else
			printf("\n");
	}
	return (0);
}
