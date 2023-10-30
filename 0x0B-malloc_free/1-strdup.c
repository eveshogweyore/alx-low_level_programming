#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space
 *           in memory containing a copy of the string
 *           given as parameter
 * @str: the string to be copied
 *
 *Return: On success (pointer to new string), otherwise (NULL)
 */
char *_strdup(char *str)
{
	char *s, *temp = str;
	unsigned int i, length = 0;

	while (*temp)
	{
		length += 1;
		temp++;
	}

	s = (char *)malloc(length + 1);
	if (s != NULL)
	{
		for (i = 0; i <= length; i++)
			s[i] = str[i];
		return (s);
	}
	return (NULL);
}
