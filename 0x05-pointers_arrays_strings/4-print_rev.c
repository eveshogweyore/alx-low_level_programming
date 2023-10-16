#include "main.h"
#include <string.h>
/**
 * print_rev - prints astring in reverse
 * @s: the string to act upon
 *
 * Return: void
 */
void print_rev(char *s)
{
	int i;

	for (i = strlen(s); i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
