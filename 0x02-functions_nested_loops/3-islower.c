#include "main.h"

/**
 * _islower - check if character is lower case
 * @c: The character to check for
 *
 * Return: On success 1.
 * On error, 0 is returned.
 */
int _islower(int c)
{
	c = (char)c;

	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
