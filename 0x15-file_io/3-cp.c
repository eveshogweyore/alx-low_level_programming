#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * cp - Copies the content of a file to another file.
 * @file_from: The file to be copied from.
 * @file_to: The file to be copied to.
 *
 * Return: Nothing.
 */
void cp(const char *file_from, const char *file_to)
{
	int ff_d, ft_d, bytes = 1, bytes_written;
	char ft_buffer[1024];
	mode_t mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	ff_d = open(file_from, O_RDONLY);
	if (ff_d == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}

	ft_d = open(file_to, O_WRONLY | O_TRUNC | O_CREAT, mode);
	if (ft_d == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
	}

	while (bytes)
	{
		bytes = read(ff_d, ft_buffer, 1024);
		bytes_written = write(ft_d, ft_buffer, bytes);
		if (bytes_written == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			exit(99);
		}
	}

	if (close(ff_d) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", ff_d);
		exit(100);
	}
	if (close(ft_d) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", ft_d);
		exit(100);
	}
}

/**
 * main - Entry point.
 * @argc: Total number of arguments passed.
 * @argv: Files passed to the function.
 *
 * Return: On success, 0.
 */
int main(int argc, char **argv)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	cp(argv[1], argv[2]);

	return (0);
}
