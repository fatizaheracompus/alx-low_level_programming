#include "main.h"
#include <stdlib.h>

/**
 * append_text_to_file - function that appends text at
 * the end of a file.
 * @filename:  Is the name of the file that appends.
 * @text_content: Is the NULL terminated string to add
 * at the end of the file.
 *
 * Return: 1 on success and -1 on failure.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fp, w, L = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (L = 0; text_content[L]; L++)
			;
	}

	fp = open(filename, O_WRONLY | O_APPEND);
	w = write(fp, text_content, L);

	if (fp == -1 || w == -1)
		return (-1);

	close(fp);

	return (1);
}

