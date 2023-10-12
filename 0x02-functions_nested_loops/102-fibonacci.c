#include <stdio.h>

/**
 * main - Adds first 50 Fibonacci numbers
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
	int i;
	long int fnum, snum, fibo;

	fnum = 1;
	snum = 2;
	printf("%ld, %ld", fnum, snum);
	for (i = 0; i < 48; i++)
	{
		fibo = fnum + snum;
		printf(", %ld", fibo);
		fnum = snum;
		snum = fibo;
	}
	printf("\n");
	return (0);
}
