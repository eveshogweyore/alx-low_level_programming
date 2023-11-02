#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: array memory
 * @size: size of array
 *
 * Return: On success (pointer to allocated memory)
 *         otherwise (NULL)
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *arraymem;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arraymem = malloc(nmemb * size);
	if (arraymem == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		arraymem[i] = 0;

	return (arraymem);
}
