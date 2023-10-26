#include "main.h"

/**
 * _sqrt_recursive - guesses numbers to check for sqare root
 * @guess: number beginning at 1
 * @n: number being checked for
 *
 * Return: Success (guess), Fail (-1)
 */
int _sqrt_recursive(int guess, int n)
{
	if (guess * guess == n)
		return (guess);
	else if (guess * guess < n)
		return (_sqrt_recursive(guess + 1, n));
	else
		return (-1);
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to check for
 *
 * Return: Success (square root of number), Fail (-1)
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	else
		return (_sqrt_recursive(1, n));
}
