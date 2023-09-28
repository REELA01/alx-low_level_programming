#include "main.h"
#include <stdio.h>
/**
 * check - to find prime numbers
 * @n: parameter
 * @r: parameter
 * Return: int value
*/
int check(int n, int r)
{
	if (r >= n && n > 1)
		return (1);
	else if (n % r == 0 || n <= 1)
		return (0);
	else
		return (check(n, r + 1));
}
/**
 * is_prime_number - the prime
 * @n: parameter
 * Return: int value
*/
int is_prime_number(int n)
{
	return (check(n, 2));
}
