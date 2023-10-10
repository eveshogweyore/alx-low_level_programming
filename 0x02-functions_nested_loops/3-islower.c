#include "main.h"

/**
 * _islower - check of character is lower case
 *
 * Return: Always 0 if lower case
 */
int _islower(int c)
{
	c = (char)c;

	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
