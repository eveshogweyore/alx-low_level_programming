#include <stdio.h>

/**
* main - Entry point
* Purpose: Print numbers 1 - 9
* Return: Always 0 (Success)
*/
int main(void)
{
	for (int i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}

	putchar('\n');
	return (0);
}
