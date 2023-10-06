#include <stdio.h>

/**
 * main - Entry point
 * Purpose: Output all lower case alphabets except 'q' and 'e'
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ascii_alphabet_start = 97;
	int ascii_alphabet_end = 122;

	for (; ascii_alphabet_start <= ascii_alphabet_end; ascii_alphabet_start++)
	{
		if (ascii_alphabet_start == 101 || ascii_alphabet_start == 113)
			continue;
		putchar((char)ascii_alphabet_start);
	}

	putchar('\n');
	return (0);
}
