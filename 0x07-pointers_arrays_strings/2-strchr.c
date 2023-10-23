#include "main.h"

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
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	if (s[i] == c)
		return (s + i);
	return (0);
}
