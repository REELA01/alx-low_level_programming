#include "main.h"
/**
 * length - the length of string
 * @s: parameter
 * Return: n value
*/
int length(char *s)
{
	int n = 0;

	if (*s > '\0')
		n += length(s + 1) + 1;
	return (n);
}
/**
 * check - check if the string is palindrom
 * @s: parameter
 * @start: parameter
 * @end: parameter
 * @pair: parameter
 * Return: int value
*/
int check(char *s, int start, int end, int pair)
{
	if ((start == end && pair != 0) || (start == end + 1 && pair == 0))
		return (1);
	else if (s[start] != s[end])
		return (0);
	else
		return (check(s, start + 1, end - 1, pair));
}
/**
 * is_palindrome - know if the string is palindrom
 * @s: parameter
 * Return: int value
*/
int is_palindrome(char *s)
{
int end = length(s);

return (check(s, 0, end - 1, end % 2));
}
