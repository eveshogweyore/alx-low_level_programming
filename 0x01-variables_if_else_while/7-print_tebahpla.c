#include <stdio.h>

/**
 * main - Entry point
 * Purpose: Output all lower case alphabets
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ascii_alphabet_start = 97;
	int ascii_alphabet_end = 122;

	while (ascii_alphabet_end >= ascii_alphabet_start)
	{
		putchar((char)ascii_alphabet_end);
		ascii_alphabet_end--;
	}

	putchar('\n');
	return (0);
}
