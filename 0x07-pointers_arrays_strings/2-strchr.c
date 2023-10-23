#include "main.h"
#include <stdio.h>

/**
 * _strchr - locates a character in a string
 * @s: The string
 * @c: The character
 *
 * Return: First occurrence of character on success
 * and NULL on failure
 */
char *_strchr(char *s, char c)
{
	char *str = s;
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (str[i] == c)
			return (str += i);
	}
	return ("NULL");
}
