#include "main.h"
int is_separator(char token);

/**
 * *cap_string - capitalizes all words of a string
 * @str: The string to be capitalized
 *
 * Return: The capitalized string
 */
char *cap_string(char *str)
{
	int i = 0;

	if (str[i] >= 'a' && str[i] <= 'z')
		str[i] -= 32;
	i++;
	while (str[i] != '\0')
	{
		if (is_separator(str[i]) == 1)
		{
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
				str[i + 1] -= 32;
		}
		i++;
	}
	return (str);
}

/**
 * is_separator - checks is a given char is a separator
 * @token: The character to be checked
 *
 * Return: 1 if is a separator and 0 if not separator
 */
int is_separator(char token)
{
	int i, len = 0;
	char sep[] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"',
'(', ')', '{', '}'};

	while (sep[len])
		len++;

	for (i = 0; i < len; i++)
	{
		if (token == sep[i])
			return (1);
	}
	return (0);
}
