#include "main.h"
/**
 * isPrintableASCII - function to find peintable ascci
 * @n: parameter
 * Return: int value
*/
int isPrintableASCII(int n)
{
	return (n >= 32 && n <= 126);
}
/**
 * printHexes - tp print hax
 * @b: parameter
 * @start: parameter
 * @end: parameter
 * Return: none value
*/
void printHexes(char *b, int start, int end)
{
	int i = 0;

	while (i < 10)
	{
		if (i < end)
			printf("%02x", *(b + start + i));
		else
			printf("  ");
		if (i % 2)
			printf(" ");
		i++;
	}
}
/**
 * printASCII - print in ascii
 * @b: parameter
 * @start: parameter
 * @end: parameter
 * Return: none value
*/
void printASCII(char *b, int start, int end)
{
	int ch, i = 0;

	while (i < end)
	{
		ch = *(b + i + start);
		if (!isPrintableASCII(ch))
			ch = 46;
		printf("%c", ch);
		i++;
	}
}
/**
 * print_buffer - to find the buffer
 * @size: parameter
 * @b: parameter
 * Return: none value
*/
void print_buffer(char *b, int size)
{
	int start, end;

	if (size > 0)
	{
		for (start = 0; start < size; start += 10)
		{
			end = (size - start < 10) ? size - start : 10;
			printf("%08x: ", start);
			printHexes(b, start, end);
			printASCII(b, start, end);
			printf("\n");
		}
	} else
		printf("\n");
}
