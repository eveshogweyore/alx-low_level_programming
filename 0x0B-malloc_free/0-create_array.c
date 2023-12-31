#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of characters, and
 * initializes it with a specific char
 * @size: size of array
 * @c: character to be initialized
 *
 * Return: Success (an array initialized to a character),
 *         otherwise (NULL)
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *s;

	s = malloc(sizeof(char) * size);
	if (size == 0 || s == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		s[i] = c;
	return (s);
}
