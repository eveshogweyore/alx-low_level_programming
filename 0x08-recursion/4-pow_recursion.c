#include "main.h"

/**
 * _pow_recursion - implements raise to power
 * @x: base
 * @y: exponent
 *
 * Return: Success (x raised to the power of y), Failure (-1)
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
