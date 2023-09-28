#include "main.h"
/**
 * s - squareroot
 * @i: parameter
 * @j: parameter
 * Return: int value
*/
int s(int i, int j)
{
	if (j * j == i)
		return (j);
	else if (j * j > i)
		return (-1);
	return (s(i, j + 1));
}
/**
 * _sqrt_recursion - squarerrot value
 * @n: parameter
 * Return: square value
*/
int _sqrt_recursion(int n)
{
	return (s(n, 1));
}

