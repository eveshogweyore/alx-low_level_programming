#include "main.h"
/**
 * print_rev - prints astring in reverse
 * @s: the string to act upon
 *
 * Return: void
 */
void print_rev(char *s)
{
	int i;

	for (i = _strlen(s); i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
