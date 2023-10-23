#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: The memory to be filled
 * @b: The constant byte used to fill memory
 * @n: The number of bytes to fill up in memory
 *
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
