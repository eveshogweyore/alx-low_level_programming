#include <stdio.h>

/**
* main - Entry point
* Purpose: Print numbers 1 - 9
* Return: Always 0 (Success)
*/
int main(void)
{
	int i = 0;
	int j = 1;
	int track = 0;

	for (; i < 9; i++)
	{
		/*printf("i is %d\n", i);*/
		for (; j <= 9; j++)
		{
			if (i == j || track == j)
				continue;
			putchar(i + '0');
			putchar(j + '0');
			putchar(',');
			putchar(' ');
		}
		track = i;
		j = 0;
	}

	putchar('\n');
	return (0);
}
