#include "main.h"

/**
 * print_number - prints an integer
 * @n: Integer to be printed
 *
 * Return: void
 */
void print_number(int n)
{
	unsigned int divisor, counter = 1;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	divisor = n;
	while (divisor > 9)
	{
		divisor /= 10;
		counter *= 10;
	}
	for (; counter >= 1; counter /= 10)
		_putchar(((n / counter) % 10) + '0');
}
