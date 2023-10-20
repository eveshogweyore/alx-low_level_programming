#include "main.h"

/**
 * rot13 - enclodes a string using rot13
 * @str: The string to be encoded
 *
 * Return: Encoded string
 */
char *rot13(char *str)
{
	i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'm' || str[i] >= 'A' && str[i] <= 'M')
			str[i] += 13;
		if (str[i] >= 'n' && str[i] <= 'z' || str[i] >= 'N' && str[i] <= 'Z')
			str[i] -= 13;
	}
	return (str);
}
