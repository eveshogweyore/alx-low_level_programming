#include "main.h"

/**
 * times_table - Prints 9 times table to standard output
 *
 * Return: void
 */
void times_table(void)
{
	int i, j, result;

	for (i = 0; i <= 9; i++)
	{
		_putchar(48);
		for (j = 1; j <= 9; j++)
		{
			result = i * j;
			_putchar(44);
			_putchar(32);
			if (result <= 9)
			{
				_putchar(32);
				_putchar(result + 48);
			}
			else
			{
				_putchar((result / 10) + 48);
				_putchar((result % 10) + 48);
			}
		}
		_putchar('\n');
	}
}
