#include <unistd.h>
/**
 * _putchar - write strings
 * @c: parameter
 * Return: char value
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
