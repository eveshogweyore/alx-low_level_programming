#include "main.h"

/**
 * more_numbers - Print numbers 1 - 14
 *
 * Return: void
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i <= 14; i++)
	{
		if (i >= 10 || i <= 14)
			_putchar((i / 10) + '0');
		_putchar((i % 10) + '0');
	}

	_putchar('\n');
}
