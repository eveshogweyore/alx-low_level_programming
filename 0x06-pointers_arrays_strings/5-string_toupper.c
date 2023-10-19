#include "main.h"

/**
 * *string_toupper - changes lower case letters to uppercase
 * @str: The string to be manipulated
 *
 * Return: void
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (*(str + i))
	{
		if (*(str + i) >= 'a' && *(str + i) <= 'z')
			*(str + i) -= 32;
		i++;
	}
	return (str);
}
