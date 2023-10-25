#include "main.h"

/**
 * factorial - prints the factorial of a given number
 * @n: number to check for
 *
 * Return: Success (factorial of n), Failure (-1)
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (1);
	return (n * factorial(n - 1));
}
