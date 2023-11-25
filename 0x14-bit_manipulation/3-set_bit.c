#include "main.h"


int set_bit(unsigned long int *n, unsigned int index)
{
	int mask = 1 << index;

	if (index > sizeof(*n) * 8 || !n)
		return (-1);

	*n |= mask;
	return (1);
}
