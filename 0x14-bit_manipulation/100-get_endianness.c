#include "main.h"
/**
 * get_endianness - checks the endianness
 * Return: int value
*/
int get_endianness(void)
{
	int number = 1;

	return (*(char *)&number);
}
