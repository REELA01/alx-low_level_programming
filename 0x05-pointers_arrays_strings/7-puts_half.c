#include "main.h"
/**
 * puts_half - split the string
 * @str: parameter
 * Return: nothing
*/
void puts_half(char *str)
{
	int l = 0;

	while (str[l] != '\0')
		l++;
	for (l /= 2; str[l] != '\0'; l++)
		_putchar(str[l]);
	_putchar('\n');
}
