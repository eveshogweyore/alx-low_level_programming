#include "main.h"

/**
 * rot13 - enclodes a string using rot13
 * @str: The string to be encoded
 *
 * Return: Encoded string
 */
char *rot13(char *str)
{
	int i = 0, j;
	char alpha1[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char alpha2[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (str[i] != '\0')
	{
		for (j = 0; j < 53; j++)
		{
			if (str[i] == alpha1[j])
			{
				str[i] = alpha2[j];
				break;
			}
		}
		i++;
	}
	return (str);
}
