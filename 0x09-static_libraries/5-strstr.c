#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * *_strstr -  strstr function
 * @haystack: parameter
 * @needle: parameter
 * Return:i value
*/
char *_strstr(char *haystack, char *needle)
{
	char *i;

	i = strstr(haystack, needle);
	return (i);
}
