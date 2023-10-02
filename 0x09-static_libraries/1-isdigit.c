#include "main.h"
/**
 * _isdigit - chcek if digit or not
 * @c: cheker
 * Return: 0 if not digit or 1
*/
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
