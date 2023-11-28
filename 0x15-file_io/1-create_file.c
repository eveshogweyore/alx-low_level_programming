#include <unistd.h>
#include <fcntl.h>
#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of file to create
 * @text_content
 *
 * Return: On success, 1. On error, -1.
 */
int create_file(const char *filename, char *text_content)
{
	int file_d, length;
	mode_t mode = S_IRUSR | S_IWUSR;

	if (!filename)
		return (-1);

	file_d = open(filename, O_CREAT | O_TRUNC, mode);
	if (file_d == -1)
		return (-1);

	length = write(file_d, text_content, sizeof(text_content));
	if (length == -1)
		return (-1);

	return (1);
}
