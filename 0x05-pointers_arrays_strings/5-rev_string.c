#include "main.h"

/**
 * rev_string - reverses a string
 * @s: The string to be reversed
 *
 * Return: void
 */
void rev_string(char *s)
{
	char temp, *end = s;
	int i, j, length = 0;

	while (*end != '\0')
	{
		length++;
		end++;
	}
	for (i = 0, j = length - 1; i < j; i++, j--)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
	}
}
