#include "main.h"

/**
  * print_alphabet - prints alphabets a - z (10x)
  *
  * Return: Always void
  */
void print_alphabet_x10(void)
{
	char alphabet;
	int i = 0;

	for (i = 0; i < 10; i++)
	{
		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		{
			_putchar(alphabet);
		}
	_putchar('\n');		
	}
}
