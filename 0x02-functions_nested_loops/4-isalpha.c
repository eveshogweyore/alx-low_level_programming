#include "main.h"

/**
 * _isalpha - check if character is lower case
 * @c: The character to check for
 *
 * Return: On success 1.
 * On error, 0 is returned.
 */
int _isalpha(int c)
{
	c = (char)c;

	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}
