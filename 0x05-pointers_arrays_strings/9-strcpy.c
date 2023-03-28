#include "main.h"

/**
 * _strcpy - copies the string pointed to by src
 * @dest: char type string
 * @src: char type string
 * Description : copy the string pointer 'src'
 * Return: copied string
 */

char *_strcpy(char *dest, char *src)
{
int l = 0;
int x = 0;

while (*(src + l) != '\0')
{
l++;
}
for ( ; x < l ; x++)
{
dest[x] = src[x];
}
dest[l] = '\0';
return (dest);
}
