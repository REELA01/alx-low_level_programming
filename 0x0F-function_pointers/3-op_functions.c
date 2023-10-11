#include "3-calc.h"

/**
 * op_add - adds two numbers
 * @a: paramer
 * @b: parameeter
 * Return: int value
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subctracts two numbers
 * @a: parametr
 * @b: parameter
 * Return: int value
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two numbers
 * @a: parameter
 * @b: paramater
 * Return: int value
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two numbers
 * @a: num
 * @b: num
 * Return: itn value
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - mod of 2 num
 * @a: paramater
 * @b: paramater
 * Return: int
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
