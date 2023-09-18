#include "main.h"
/**
 * _atoi - char to int
 * @s: parameter
 * Return: nothing
*/
int _atoi(char *s)
{
	int t = 1, num = 0;


	do {
		if (*s == '-')
			t *= -1;
		else if (*s >= '0' && *s <= '9')
			num = (num * 10) + (*s - '0');
		else if (*s > 0)
			break;
	} while (*s++);
	return (num * t);
}
