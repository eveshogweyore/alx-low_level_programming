#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: format specifier(s) for the args provided
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	int i = 0, j;
	va_list args;
	char *value;
	char *allow = "cifs";

	va_start(args, format);
	while (format[i] != NULL)
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				value = va_arg(args, char *);
				if (value == NULL)
					value = "(nil)";
				printf("%s", value);
				break;
		}
		j = 0;
		while (allow[j] != '\0')
		{
			if (format[i + 1] != '\0' && allow[j] == format[i])
				printf(", ");
			j++;
		}
		i++;
	}
	va_end(args);
	printf("\n");
}
