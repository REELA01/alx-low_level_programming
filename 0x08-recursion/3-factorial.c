#include "main.h"
/**
 * factorial - factorial of n
 * @n: parameter
 * Return: int value
*/
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
