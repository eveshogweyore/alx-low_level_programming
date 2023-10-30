#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: On success (concatenated strings), otherwise (NULL)
 */
char *str_concat(char *s1, char *s2)
{
	char *str;
	unsigned int s1count, s2count, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (s1count = 0; s1[s1count] != '\0'; s1count++)
		;
	for (s2count = 0; s2[s2count] != '\0'; s2count++)
		;

	str = (char *)malloc((s1count + s2count) + 1);
	if (str == NULL)
		return (NULL);

	for (i = 0; i < s1count; i++)
		str[i] = s1[i];
	for (j = 0; j <= s2count; i++, j++)
		str[i] = s2[j];

	return (str);
}
