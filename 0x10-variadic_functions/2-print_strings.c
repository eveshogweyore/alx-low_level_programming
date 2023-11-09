#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line
 * @separator: separates the output strings
 * @n: number of strings passed to the function
 *
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list str;
	unsigned int i;
	char *current_value;

	va_start(str, n);

	for (i = 0; i < n; i++)
	{
		current_value = va_arg(str, char *);
		if (current_value)
			printf("%s", current_value);
		else
			printf("(nil)");
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(str);
}
