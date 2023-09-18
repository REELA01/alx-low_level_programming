#include "main.h"
/**
 * _strlen - takes a pointer to char for length
 * @s: parameter
 * Return: nothing
*/
int _strlen(char *s)
{
	int cont;

	for (cont = 0; *s != '0'; s++)
		cont++;
	return (cont);
}
