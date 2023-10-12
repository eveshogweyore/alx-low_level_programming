#include "main.h"

/**
 * _isupper - check if character is upper case
 * @c: The character to check for
 *
 * Return: On success 1.
 * On error, 0 is returned.
 */
int _islower(int c)
{
	c = (char)c;

	if (c >= 'A' && c <= 'B')
		return (1);
	return (0);
}
