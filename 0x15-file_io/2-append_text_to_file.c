#include "main.h"

/**
* _strlen - returns the length of a string
* @s: string whose length to return
*
* Return: integer length of string
*/
int _strlen(char *s)
{
int n = 0;

if (!s)
return (0);
while (*s++)
n++;
return (n);
}
/**
* append_text_to_file - appends text at the end of a file.
* @filename: the name of file to be append
* @text_content: the text to be append
*
* Return: 1 on success and -1 on failure.
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int fa;
	ssize_t byte = 0;
	ssize_t len = _strlen(text_content);

	if (!filename)
		return (-1);
	fa = open(filename, O_WRONLY | O_APPEND);
	if (fa == -1)
		return (-1);
	if (len)
		byte = write(fa, text_content, len);
	close(fa);
	return (byte == len);
}



