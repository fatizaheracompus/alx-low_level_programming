#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it to
 * the POSIX standard output.
 * @filename: textefile being read and print.
 * @letters:  the number of letters it should read and print.
 *
 * Return: the actual number of letters it could read and print.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fp;
	char *buff;
	ssize_t w;
	ssize_t r;

	fp = open(filename, O_RDONLY);
	if (fp == -1)

		return (0);

	buff = malloc(sizeof(char) * letters);
	r = read(fp, buff, letters);
	w = write(STDOUT_FILENO, buff, r);

	free(buff);
	close(fp);
	return (w);
}

