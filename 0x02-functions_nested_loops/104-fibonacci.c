#include <stdio.h>

/**
 * main - Display first 98 Fibonacci numbers
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
	int i, fbool, sbool, count = 0;
	long int fnum, snum, fibo, fibo2, n11, n22;

	fnum = 1;
	snum = 2;
	fbool = sbool = 1;
	printf("%ld, %ld", fnum, snum);
	for (i = 0; i < 96; i++)
	{
		if (fbool)
		{
			fibo = fnum + snum;
			printf(", %ld", fibo);
			fnum = snum;
			snum = fibo;
		}
		else
		{
			if (sbool)
			{
				n11 = fnum % 1000000000;
				n22 = fnum % 1000000000;
				fnum = fnum / 1000000000;
				snum = snum / 1000000000;
				sbool = 0;
			}
			fibo2 = (n11 + n22);
			fibo = fnum + snum + (fibo2 / 1000000000);
			printf(", %ld", fibo);
			printf("%ld", fibo2 % 1000000000);
			fnum = snum;
			n11 = n22;
			snum = fibo;
			n22 = (fibo2 % 1000000000);
		}
		if (((fnum + snum) < 0) && fbool == 1)
			fbool = 0;
		count++;
	}
	printf("\n%d\n", count);
	return (0);
}
