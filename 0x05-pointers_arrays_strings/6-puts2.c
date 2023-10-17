#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: The string to be printed
 *
 * Return: void
 */
void puts2(char *str)
{
	int i, length = 0;
	char *end = str;

	while (*end != '\0')
	{
		length++;
		end++;
	}
	for (i = 0; i < length; i += 2)
		_putchar(str[i]);
	_putchar('\n');
}
