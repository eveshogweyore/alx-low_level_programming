#include "main.h"

/**
 * puts_half - prints the second half of a string
 * @str: The string to be halved
 *
 * Return: void
 */
void puts_half(char *str)
{
	int i, length = 0;
	char *end = str;

	while (*end != '\0')
	{
		length++;
		end++;
	}
	i % 2 != 0 ? i = (length / 2) + 1 : i = length / 2;
	for (; i < length; i++)
		_putchar(str[i]);
	_putchar('\n');
}
