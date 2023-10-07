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

	for (; i < 9; i++)
	{
		for (; j <= 9; j++)
		{
			if (i > 0 && j <= i)
				continue;
			putchar(i + '0');
			putchar(j + '0');
			if (i == 8 && j == 9)
				continue;
			putchar(',');
			putchar(' ');
			
		}
		j = 0;
	}

	putchar('\n');
	return (0);
}
