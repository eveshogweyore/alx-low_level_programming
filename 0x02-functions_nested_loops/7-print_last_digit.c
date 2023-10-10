#include "main.h"

/**
 * print_last_digit - output last digit of given number
 * @n: The number to check for
 *
 * Return: Always last digit
 */
int print_last_digit(int n)
{
	if (n < 0)
		n = n * -1;
	_putchar((n % 10) + 48);
	return (n % 10);
}
