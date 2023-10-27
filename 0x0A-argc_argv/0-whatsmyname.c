#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 * @argc: size of argv
 * @argv: command line arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
