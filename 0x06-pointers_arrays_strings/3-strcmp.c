#include "main.h"

/**
 * _strcmp - compare two strings
 * @s1: First string to compare
 * @s2: Second string to compare
 *
 * Return: -ve digit if less, +ve digit if greater and 0 if equal
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return ((int)s1[i] - (int)s2[i]);
		i++;
	}
	return (0);
}
