#include "main.h"

/**
 * print_to_98 - Print numbers from n to 98
 * @n: The first number
 *
 * Return: void
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			if (n < 0)
			{
				_putchar('-');
				if (n >= -9)
				{
					_putchar((n * -1) + 48);
				} else if (n >= -99)
				{
					_putchar(((n * -1) / 10) + 48);
					_putchar(((n * -1) % 10) + 48);
				} else
				{
					_putchar((((n * -1) / 10) / 10) + 48);
					_putchar((((n * -1) / 10) % 10) + 48);
					_putchar(((n * -1) % 10) + 48);
				}
			}
			if (n >= 0 && n <= 9)
				_putchar(n + 48);
			if (n > 9)
			{
				_putchar((n / 10) + 48);
				_putchar((n % 10) + 48);
			}
			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	} else
	{
		for (; n >= 98; n--)
		{
			if (n > 99)
			{
				_putchar(((n / 10) / 10) + 48);
				_putchar(((n / 10) % 10) + 48);

			} else
			{
				_putchar((n / 10) + 48);
			}
			_putchar((n % 10) + 48);
			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	_putchar('\n');
}
