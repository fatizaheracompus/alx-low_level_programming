#include "main.h"

#define PERMISSIONS (S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH)
#define USAGE "Usage: cp file_from file_to\n"
#define ERR_NOTREAD "Error: Can't read from file %s\n"
#define ERR_NOTWRITE "Error: Can't write to %s\n"
#define ERR_NOTCLOSE "Error: Can't close fd %d\n"

/**
 * main - program that copies the content of a file to another file.
 * @arc: argument counter
 * @arv: argument array.
 *
 * Return: 1 on success 0 on failure.
 */
int main(int arc, char **arv)
{
	int from_fp = 0, to_fp = 0;
	ssize_t d;
	char buff[READ_BUFF_SIZE];

	if (arc != 3)
		dprintf(STDERR_FILENO, USAGE), exit(97);

	from_fp = open(arv[1], O_RDONLY);
	if (from_fd == -1)
		dprintf(STDERR_FILENO, ERR_NOTREAD, av[1]), exit(98);
	to_fp = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, PERMISSIONS);
	if (to_fp == -1)
		dprintf(STDERR_FILENO, ERR_NOTWRITE, arv[2]); exit(99);

	while ((d = read(from_fp, buff, READ_BUFF_SIZE)) > 0)
		if (write(to_fp, buff, d) != d)

			dprintf(STDERR_FILENO, ERR_NOTWRITE, arv[2]); exit(99);
	if (d == -1)
		dprintf(STDERR_FILENO, ERR_NOTREAD, arv[1]), exit(98);
	from_fp = close(from_fp);
	to_fp = close(to_fp);
if (from_fp)
	dprintf(STDERR_FILENO, ERR_NOTCLOSE, from_fd); exit(100);
if (to_fp)
	dprintf(STDERR_FILENO, ERR_NOTCLOSE, from_fd); exit(100)

		return (EXIT_SUCCESS);
}

