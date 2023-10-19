#include "main.h"

/**
 * *_strncpy - copies a string from one var to another
 * @dest: The string to be copied into
 * @src: The string to copy
 * @n: The number of characters in the src var to be copied
 *
 * Return: Pointer to the start of the copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	for (; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
