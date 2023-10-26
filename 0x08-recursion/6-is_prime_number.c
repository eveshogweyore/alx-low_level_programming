#include "main.h"

/**
 * is_prime_recursive - helper function to is_prime_number
 * @n: number to check for
 * @divisor: divisor from (n - 1) to 1
 *
 * Return: Success (1), Otherwise (0)
 */
int is_prime_recursive(int n, int divisor)
{
	if (n <= 1)
	{
		return (0);
	}
	else if (divisor == 1)
	{
		return (1);
	}
	else
	{
		if (n % divisor == 0)
			return (0);
		else
			return (is_prime_recursive(n, divisor - 1));
	}
}

/**
 * is_prime_number - checks if a number is prime
 * @n: number to check for
 *
 * Return: Success (1), Otherwise (0)
 */
int is_prime_number(int n)
{
	return (is_prime_recursive(n, n - 1));
}
