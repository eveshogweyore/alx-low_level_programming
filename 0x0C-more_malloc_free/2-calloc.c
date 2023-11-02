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

	arraymem = malloc(nmemb * sizeof(size));
	if (arraymem == 0)
		return (NULL);	

	for (i = 0; i < nmemb; i++)
		arraymem[i] = 0;

	return (arraymem);
}
