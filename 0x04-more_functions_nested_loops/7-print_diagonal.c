#include "main.h"

/**
 * print_diagonal - Print straight line in terminal
 * @n: specifies how wide the diagonal will be
 *
 * Return: void
 */
void print_line(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
	}
}
