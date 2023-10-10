#include "main.h"

/**
 * _abs - returns an absolute value
 * @n: The number to check for
 *
 * Return: Always positive number
 */
int _abs(int n)
{
	if (n < 0)
		return (n * -1);
	return (n);
}
