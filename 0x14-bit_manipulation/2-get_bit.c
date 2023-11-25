#include "main.h"

/**
 * get_bit - gets the value of a bit at a given index
 * @n: the given number
 * @index: the index to check for
 *
 * Return: On success (value at index), otherwise (0)
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int mask = 1 << index;
	unsigned int length = 0, i, bit, on_bit = 0;

	for (i = sizeof(n) * 8 + 1; i; i--)
	{
		bit = (n >> i) & 1;
		if (on_bit || bit)
		{
			on_bit = 1;
			length++;
		}
	}

	if ((length - 1) < index)
		return (-1);

	if (n & mask)
		return (1);

	return (0);
}
