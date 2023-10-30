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
	char *s;
	unsigned int i;

	s = malloc(sizeof(str));
	if (str == NULL || sizeof(s) < 2)
		return (NULL);
	for (i = 0; i <= sizeof(str); i++)
		s[i] = str[i];
	return (s);
}
