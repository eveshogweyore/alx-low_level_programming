#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: string representation of number to be converted
 *
 * Return: On success (the converted number), otherwise (0)
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int i, j = 0, len;

	if (!b)
		return (0);

	for (len = 0; b[len]; len++)
		;
	for (i = (len - 1); i >= 0; i--, j++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		result += (b[i] - '0') << j;
	}

	return (result);
}
