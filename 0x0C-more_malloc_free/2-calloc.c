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
	void *arraymem;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arraymem = calloc(nmemb, sizeof(size));
	if (arraymem == NULL)
		return (NULL);

	return (arraymem);
}
