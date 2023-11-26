#include <stdio.h>

/**
 * flip_bits - checks for the number of bits to be flipped
 * @n: the first number
 * @m: the second number
 *
 * Return: On success (the number of bits to be flipped to
 *         get from one number to the other)
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, flip = 0;

	for (i = sizeof(long int) * 8 - 1; i >= 0; i--)
		if (((n >> i) & 1) ^ ((m >> i) & 1))
			flip++;

	return (flip);
}
