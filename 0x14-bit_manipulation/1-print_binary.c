#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: the decimal number to be converted
 *
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	/* n --> */
	/* 13 = 0000 1101 | 0000 0000 | 0000 0000 | 0000 0000 */
	int i, j, flag = 0;
	char byte, bit;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	for (i = (sizeof(unsigned int) - 1); i >= 0; i--)
	{
		byte = ((char *)&n)[i];
		for (j = 7; j >= 0; j--)
		{
			bit = ((byte>>j) & 1);
			if (bit == 1 && flag == 0)
				flag = 1;
			if (flag == 1)
				_putchar(bit + '0');
		}
	}
}
