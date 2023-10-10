#include "main.h"

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
