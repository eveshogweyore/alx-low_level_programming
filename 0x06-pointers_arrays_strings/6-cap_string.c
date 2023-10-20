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
	int i, len = 0;

	while (str[len])
		len++;
	for (i = 0; i < len; i++)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			continue;
		if (str[i] >= '0' && str[i] <= '9')
			continue;
		if (str[i] == '\t')
			str[i] = ' ';
		if (is_separator(str[i]) == 1)
			continue;
		if (is_separator(str[i - 1]) != 1 && i != 0)
			continue;
		str[i] -= 32;
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
