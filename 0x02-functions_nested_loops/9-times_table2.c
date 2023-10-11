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
    int k;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			int result = i * j;

			int count = 0;
            while (result > 0 || count == 0)
            {
                int digit = result % 10;
                result /= 10;
                _putchar(digit + '0');
                count++;
            }
			_putchar(',');
            for (k = 0; k < 4 - count; k++)
            {
                _putchar(' ');
            }
		}
		_putchar('\n');
	}
}
