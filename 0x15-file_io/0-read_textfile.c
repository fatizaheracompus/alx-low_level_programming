#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX
 * @filename: name of a file to read
 * @letters: numbers of bytes to read.
 *
 * Return: number bytes read/printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t bytes;
	int frp;
	char buf[READ_BUF_SIZE * 8];

	if (filename == NULL || !letters)
		return (0);

	frp = open(filename, O_RDONLY);
	if (frp == -1)
		return (0);

	bytes = read(frp, &buf[0], letters);
	bytes = write(STDOUT_FILENO, &buf[0], bytes);
	close(frp);

	return (bytes);
}
