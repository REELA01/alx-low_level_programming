#include "variadic_functions.h"
/**
 * print_strings - prints strings
 * @separator: parameter
 * @n: parameter
 * @...: parameter
 * Return: void value
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list val;
	unsigned int i;
	char *s;

	va_start(val, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(val, char *);
		if (s != NULL)
			printf("%s", str);
		else
			printf("(nil)");

		if (separator && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(val);
}
