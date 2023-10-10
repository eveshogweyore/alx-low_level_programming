#include "main.h"

/**
 * print_last_digit - output last digit of given number
 * @n: The number to check for
 *
 * Return: Always last digit
 */
int print_last_digit(int n)
{
	int last_digit = n % 10;

	if (n < 0)
		last_digit = (n * -1) % 10;
	_putchar(last_digit + '0');
	return (last_digit);
}
