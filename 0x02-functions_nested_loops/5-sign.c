#include "main.h"

/**
 * print_sign - check if character is lower case
 * @n: The number to check for
 *
 * Return: If positive 1, if negative -1 and if zero 0
 */
int print_sign(int n)
{
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	_putchar('+');
	return (1);
}
