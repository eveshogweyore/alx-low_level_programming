#include <stdio.h>
#include "main.h"
int lengthof(char *);
/**
 * print_buffer - prints a buffer given a specifed format
 * @b: The buffer to be printed
 * @size: Specified the output per line
 *
 * Return: void
 */
void print_buffer(char *b, int size)
{
	char hexvalues[29];
	int i, j, k, l, m, diff, hold;

	if (size <= 0)
		printf("\n");

	for (i = 0; i < size; i += 10)
	{
		diff = size - i;
		if (diff < 10)
		{
			for (j = 0, k = 0, l = i; l < size; j += 2, k += 3, l += 2)
{
				sprintf(hexvalues + (j + k), "%02x%02x ", b[l], b[l + 1]);
				hold = j + k;
}
			hexvalues[hold + 5] = '\0';
			for (m = i; m < size; m++)
			{
				if (b[m] < 32 || b[m] == 127)
					b[m] = '.';
			}
		}
		else
		{
			for (j = 0, k = 0, l = i; l < (i + 10); j += 2, k += 3, l += 2)
				sprintf(hexvalues + (j + k), "%02x%02x ", b[l], b[l + 1]);
			hexvalues[24] = '\0';
			for (m = i; m < i + 10; m++)
			{
				if (b[m] < 32 || b[m] == 127)
					b[m] = '.';
			}
		}
		printf("%08x: %-24s %.10s\n", i, hexvalues, (b + i));
	}
}
