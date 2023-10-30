#include "main.h"
#include <stdio.h>
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
	char *p = needle;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		printf("i is %d", i);
		if (*p == haystack[i])
		{
			movei = i + 1;
			for (j = 1; p[j] != '\0'; j++, movei++)
			{
				if (haystack[movei] == '\0')
					break;
				if (p[j] == haystack[movei])
					match = 1;
				else
					match = 0;
			}
		}
		if (match == 1)
			return ("Working...");
	}
	return (0);
}
