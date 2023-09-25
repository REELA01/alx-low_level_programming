#include <unistd.h>
/**
 * _putchar - printing char
 * @c: to print
 * Return: success
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
