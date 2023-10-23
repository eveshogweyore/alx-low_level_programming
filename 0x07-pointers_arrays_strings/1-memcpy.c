#include "main.h"

/**
 * _memcpy - copies n bytes from one memory to another
 * @dest: The memory area to be copied into
 * @src: The memory area to be copied
 * @n: Specifies how many bytes to be copied
 *
 * Return: Pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
