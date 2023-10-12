#include "variadic_functions.h"
/**
 * print_numbers - prints
 * @separator: parameter
 * @...: parameter
 * @n: parameter
 * Return: void value
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list val;
	unsigned int i;

	va_start(val, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(val, int));
		if (separator && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(val);
}
