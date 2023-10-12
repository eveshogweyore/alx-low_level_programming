#include "main.h"

/**
 * print_line - Print straight line in terminal
 * @n: specifies how long the line will be
 *
 * Return: void
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
		_putchar('_');
	_putchar('\n');
}
