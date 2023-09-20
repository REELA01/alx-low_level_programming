#include <unistd.h>
/**
 * _putchar - to print
 * @c: parameter
 * Return: success 1
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
