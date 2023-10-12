#include <stdio.h>

/**
 * main - Output the sum of even-valued
 * in Fibonacci sequence
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
	long int fnum, snum, fibo, fibo_sum;

	fnum = 1;
	snum = 2;
	fibo = fibo_sum = 0;
	while (fibo <= 4000000)
	{
		fibo = fnum + snum;
		fnum = snum;
		snum = fibo;
		if ((fnum % 2) == 0)
		{
			fibo_sum += fnum;
		}
	}
	printf("%ld\n", fibo_sum);
	return (0);
}
