#include "main.h"
/**
 * _isupper - for capital letters
 * @c: the checher
 * Return: 1 if upper 0 otherwise
*/
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
