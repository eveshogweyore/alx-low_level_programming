#include "main.h"

/**
 * _strlrn_recursion - returns the length of a string
 * @s: The string
 *
 * Return: length of string provided
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + leng(s + 1));
}
