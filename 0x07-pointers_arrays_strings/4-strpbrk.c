#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: The main string
 * @accept: The string to check for a match
 *
 * Return: pointer to matching byte on success
 *         and NULL on failure
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (s + i);
		}
	}
	return (0);
}
