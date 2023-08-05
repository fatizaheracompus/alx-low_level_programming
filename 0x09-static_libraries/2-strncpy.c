#include "main.h"

/**
 * _strncpy - a function that copies a string.
 * @dest: destination string pointer.
 * @src: source string pointer.
 * @n: number of bytes to be ued.
 * Return: pointer to destination string.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int m;

	for (m = 0; m < n && src[m] != '\0'; m++)
		dest[m] = src[m];
	for (; m < n; m++)
	dest[m] = '\0';
	return (dest);
}
