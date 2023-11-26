#include "main.h"

/**
 * get_endianness - checks for endianness
 *
 * Return: If little endian (0), if big endian (1)
 */
int get_endianness(void)
{
	unsigned int n = 1;
	char *endian = (char *)&n;

	return (*endian);
}
