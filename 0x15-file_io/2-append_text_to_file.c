#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: The name of the file.
 * @text_content: String to be added at the end of the file.
 *
 * Return: On success, 1. On error, -1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_d, bytes_copied, length;

	file_d = open(filename, O_APPEND);
	if (file_d == -1)
		return (-1);

	for (length = 0; text_content[length]; length++)
		;
	bytes_copied = write(file_d, text_content, length);
	if (bytes_copied == -1)
		return (-1)

	return (1);
}
