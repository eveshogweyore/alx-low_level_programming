#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: The main string
 * @needle: The substring
 *
 * Return: a pointer to beginning of substring (on success)
 *         and NULL (on fail)
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j, movei, match = 0;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (needle[0] == haystack[i])
		{
			movei = i + 1;
			for (j = 1; needle[j] != '\0'; j++, movei++)
			{
				if (haystack[movei] == '\0')
					break;
				if (needle[j] == haystack[movei])
					match = 1;
				else
					match = 0;
			}
		}
		if (match == 1)
			break;
	}
	return (haystack + i);
}
