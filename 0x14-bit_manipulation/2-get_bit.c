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

	if (index > (sizeof(n) * 8))
		return (-1);

	if (n & mask)
		return (1);

	return (0);
}
