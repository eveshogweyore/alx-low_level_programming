#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: The string to be encoded
 *
 * Return: An encoded string
 */
char *leet(char *str)
{
	int i = 0, j;
	char upper[] = {'A', 'E', 'O', 'T', 'L'};
	char lower[] = {'a', 'e', 'o', 't', 'l'};
	char number[] = {'4', '3', '0', '7', '1'};

	while (str[i] != '\0')
	{
		for (j = 0; j < 5; j++)
		{
			if (str[i] == upper[j] || str[i] == lower[j])
			{
				str[i] = number[j];
				break;
			}
		}
		i++;
	}
	return (str);
}
