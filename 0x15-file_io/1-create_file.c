#include <unistd.h>
#include <fcntl.h>
#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of file to create
 * @text_content: the actual text to be sent to file descriptor
 *
 * Return: On success, 1. On error, -1.
 */
int create_file(const char *filename, char *text_content)
{
	int file_d, i, w_length;
	mode_t mode = S_IRUSR | S_IWUSR;

	for (i = 0; text_content[i]; i++)
		;

	if (!filename)
		return (-1);

	file_d = open(filename, O_CREAT | O_RDWR | O_TRUNC, mode);
	if (file_d == -1)
		return (-1);

	if (text_content)
	{
		w_length = write(file_d, text_content, i);
		if (w_length == -1)
			return (-1);
	}
	return (1);
}
