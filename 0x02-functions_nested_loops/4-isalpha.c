#include "main.h"
/**
 * _isalpha - return 1 if its a letter 0 otherwise
 * @c : checs if the character is aletter
 * Return: 1 if letter 0 other wise
*/
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}
