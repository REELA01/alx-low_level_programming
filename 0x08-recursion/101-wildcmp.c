#include "main.h"
/**
 * strlen_w - return the length without char
 * @str: parameter
 * Return: int value
*/
int strlen_w(char *str)
{
	int len = 0, index = 0;

	if (*(str + index))
	{
		if (*str != '*')
			len++;

		index++;
		len += strlen_w(str + index);
	}

	return (len);
}
/**
 * iterate_wild - itrate at string till null
 * @w: parameter
 * Return: none value
*/
void iterate_wild(char **w)
{
	if (**w == '*')
	{
		(*w)++;
		iterate_wild(w);
	}
}
/**
 * *postfix_match - see if string str matches the postfix
 * @str: parameter
 * @postfix: parameter
 * Return: char value
*/
char *postfix_match(char *str, char *postfix)
{
	int str_len = strlen_w(str) - 1;
	int postfix_len = strlen_w(postfix) - 1;

	if (*postfix == '*')
		iterate_wild(&postfix);
	if (*(str + str_len - postfix_len) == *postfix && *postfix != '\0')
	{
		postfix++;
		return (postfix_match(str, postfix));
	}
	return (postfix);
}
/**
 * wildcmp - comapres between 2 strings
 * @s1: parameter
 * @s2: parameter
 * Return: 1 if they match 2 if they dont
*/
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*')
	{
		iterate_wild(&s2);
		s2 = postfix_match(s1, s2);
	}

	if (*s2 == '\0')
		return (1);

	if (*s1 != *s2)
		return (0);

	return (wildcmp(++s1, ++s2));
}
