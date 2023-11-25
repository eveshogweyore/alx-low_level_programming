#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at at given index
 * @n: address of number
 * @index: the index to be set to 0
 *
 * Return: On success (1), otherwise (0)
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	int mask = 1 << index;

	if ((index > sizeof(*n) * 8) || !n)
		return (-1);

	*n &= ~mask;
	return (1);
}
