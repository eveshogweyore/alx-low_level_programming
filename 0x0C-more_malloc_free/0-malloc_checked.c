#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: size of memory
 *
 * Return: On success (pointer to allocated memory)
 * otherwise (98)
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
