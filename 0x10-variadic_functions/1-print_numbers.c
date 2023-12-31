#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by aa new line
 * @separator: separates the printed numbers
 * @n: the total number of digits to be printed
 *
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int i;

	va_start(nums, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(nums, int));
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}

	printf("\n");
	va_end(nums);
}
