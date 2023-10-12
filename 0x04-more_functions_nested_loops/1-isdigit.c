#include "main.h"

/**
 * _isdigit - check if character is digit (0 -9)
 * @c: The character to check for
 *
 * Return: On success 1.
 * On error, 0 is returned.
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
