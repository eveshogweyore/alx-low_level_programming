#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: The main string
 * @accept: The prefix substring
 *
 * Return: length of prefix substring
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, count = 0;

	for (i = 0; accept[i] != '\0'; i++)
	{
		for (j = 0; s[j] != ' '; j++)
		{
			if (accept[i] == s[j])
				count += 1;
		}
	}
	return (count);
}
