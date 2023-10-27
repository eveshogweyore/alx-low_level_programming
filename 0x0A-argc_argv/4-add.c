#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 * @argc: number of command line arguments
 * @argv: array of command line arguments
 *
 * Return: On success (0), otherwise (1)
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;
	char *end;

	for (i = 1; i < argc; i++)
	{
		strtol(argv[i], &end, 10);
		if (*end != '\0')
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
