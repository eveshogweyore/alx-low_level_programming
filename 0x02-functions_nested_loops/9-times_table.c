#include "main.h"

/**
 * times_table - Prints 9 times table to standard output
 *
 * Return: void
 */
void times_table(void)
{
	int i;
	int j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			int result = i * j;

			if (result > 9)
			{
				_putchar((result / 10) + 48);
				_putchar((result % 10) + 48);
			} else
			{
				_putchar(result + 48);
			}
			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
