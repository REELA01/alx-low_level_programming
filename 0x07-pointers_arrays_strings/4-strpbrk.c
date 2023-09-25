#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * *_strpbrk - strings
 * @s: parameter
 * @accept: parameter
 * Return:i value
*/
char *_strpbrk(char *s, char *accept)
{
	char *i;

	i = strpbrk(s, accept);
	return (i);
}
