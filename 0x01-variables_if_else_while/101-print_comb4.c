#include <stdio.h>

/**
* main - Entry point
* Purpose: Print numbers 001 - 999
* Return: Always 0 (Success)
*/
int main(void)
{
	int i = 0;
	int j;
	int k;

	for (; i <= 7; i++)
	{
		for (j = i + 1; j <= 8; j++)
		{
			for (k = j + 1; k <= 9; k++)
			{
				putchar(i + '0');
				putchar(j + '0');
				putchar(k + '0');
				if (i != 7)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
