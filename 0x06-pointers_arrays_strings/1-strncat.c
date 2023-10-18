#include "main.h"

/**
 * *_strncat - concatenates two strings
 * @dest: The initial string
 * @src: The string to be appended
 * @n: The number of characters in the src var to be appended
 *
 * Return: Pointer to the start of the concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;
	/*char *end = dest;*/

	while (*(dest + i) != '\0')
	{
		i++;
	}
	while (j < n && *(src + j) != '\0')
	{
		*(dest + i) = *(src + j);
		j++;
		i++;
	}
	return (dest);
}
