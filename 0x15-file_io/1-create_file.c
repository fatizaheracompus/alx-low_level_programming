#include "main.h"
#include <string.h>

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
* create_file - function create a file
* @filename: name to file to be created.
* @text_content: is a NULL terminated string to write to the file
*
* Return: 1 on success, -1 failure. 
*/

int create_file(const char *filename, char *text_content)
{
ssize_t byte = 0;
int fc;
ssize_t len = _strlen(text_content);

if (filename == NULL)
return (-1);
fc = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
if (fc == -1)
	return (-1);
if (len)
	byte = write(fc, text_content, len);
close(fc);

return (len = byte ? 1 : -1);
}
