#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
 * read_textfile - reads a text file and prints to POSIX stdout
 * @filename: file to be read from
 * @letters: number of letters to read and print
 *
 * Return: On success (number of letters printed), otherwise (0)
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t length = 0, bytes_written;
	char file_buffer[2048];
	int file_d;

	file_d = open(filename, O_RDONLY);
	if (file_d == -1)
		return (0);

	length = read(file_d, file_buffer, letters);

	bytes_written = write(STDIN_FILENO, file_buffer, length);
	if (bytes_written == -1 || length > bytes_written)
		return (0);

	close(file_d);

	return (length);
}
