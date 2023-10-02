#include "main.h"
/**
 * _islower - to print lowercase
 * @c: if the c is lowercase
 * Return: 1 lowercase 0 otherwise
*/
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
