#include <stdio.h>

/**
 * main - Entry point
 * Purpose: Output upper and lower case alphabets
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ascii_lower_start = 97;
	int ascii_lower_end = 122;
	int ascii_upper_start = 65;
	int ascii_upper_end = 90;

	for (; ascii_lower_start <= ascii_lower_end; ascii_lower_start++)
		putchar((char)ascii_lower_start);
	for (; ascii_upper_start <= ascii_upper_end; ascii_upper_start++)
		putchar((char)ascii_upper_start);

	putchar('\n');
	return (0);
}
