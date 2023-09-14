#include <unistd.h>
#include "main.h"
/**
 * _putchar - the function to print
 * @n: the char
 * description: print
 * Return: 0 (success)
 */
int _putchar(char n)
{
	return (write(1, &n, 1));
}
