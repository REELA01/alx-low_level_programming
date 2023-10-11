#include "function_pointers.h"
/**
 * print_name - prints aname
 * @name: parameter
 * @f: parameter
 * Return: void value
*/
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
