#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	print_alphabet();
	return (0);
}

/**
  * print_alphabet - prints alphabets a - z
  *
  * Return: Always void
  */
void print_alphabet(void)
{
	char alphabet = 'a';

	for (; alphabet <= 'z'; alphabet++)
	{
		_putchar(alphabet);
	}
	_putchar('\n');
}
