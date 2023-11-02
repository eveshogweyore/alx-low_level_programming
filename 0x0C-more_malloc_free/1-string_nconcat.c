#include <stdlib.h>
unsigned int strlength(char *);

/**
 * string_nconcat - concatenates two strings
 * @s1: First string
 * @s2: Second string
 * @n: Number of bytes in s2 to be concatenated
 *
 * Return: On success (Pointer to newly allocated space)
 *         otherwisw (NULL)
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j;
	char *newptr;

	if (n > strlength(s2))
		n = strlength(s2);

	newptr = malloc(strlength(s1) + n + 1);

	if (newptr == NULL)
		return (NULL);

	for (i = 0; i < strlength(s1); i++)
		newptr[i] = s1[i];
	for (j = 0; j < n; j++, i++)
		newptr[i] = s2[j];
	newptr[i] = '\0';

	return (newptr);
}

/**
 * strlength - checks for the length of a string
 * @str: The string to check for
 *
 * Return: On success (length of the string)
 */
unsigned int strlength(char *str)
{
	unsigned int i = 0;

	while (str[i] != '\0')
		i++;

	return (i);
}
