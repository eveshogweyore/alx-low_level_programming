#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: total number of parameters
 *
 * Return: On success (sum of all parameters)
 * otherwise (0)
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list nums;
	unsigned int i, sum = 0;

	if (n == 0)
		return (0);

	va_start(nums, n);

	for (i = 0; i < n; i++)
		sum += va_arg(nums, int);

	va_end(nums);

	return (sum);
}
