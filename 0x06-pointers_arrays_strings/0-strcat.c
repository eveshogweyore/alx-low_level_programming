#include "main.h"

/**
 * *_strcat - concatenates two strings
 * @dest: The initial string
 * @src: The string to be appended
 *
 * Return: Pointer to the start of the concatenated string
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;
	char *end = dest;

	while (*(dest + i) != '\0')
	{
		end++;
		i++;
	}
	while (*(src + j) != '\0')
	{
		*end = *(src + j);
		j++;
		end++;
	}
	return (dest);
}
