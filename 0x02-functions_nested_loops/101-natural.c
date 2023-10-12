#include <stdio.h>

/**
 * main - Prints multiples of 3 below 1024
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
	int i, j;

	for (i = 1; i < 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
			j += i;
	}
	printf("%d\n", j);
	return (0);
}
