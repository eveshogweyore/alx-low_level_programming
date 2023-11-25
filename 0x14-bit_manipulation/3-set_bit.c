#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: address of the number
 * @index: the index to be set to 1
 *
 * Return: On success (1), otherwise (-1)
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	int mask = 1 << index;

	if (index > sizeof(*n) * 8 || !n)
		return (-1);

	*n |= mask;
	return (1);
}
