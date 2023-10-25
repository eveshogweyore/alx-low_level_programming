#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: The string to be printed
 *
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	int i = 0;

	if (*s == '\0')
		return;
	s++;
	i++;
	_print_rev_recursion(s);
	_putchar(*s);
	if (i == 1)
		_putchar(\n);
}
