#include "main.h"

/**
 * string_toupper - function that change all lowercase letters
 * of a string to uppercase
 * @x: pointer to string
 * Return: pointer to uppercase string.
 */

char *string_toupper(char *x)
{
	int len;

	len = 0;
	while (x[len] != '\0')
	{
		if (x[len] >= 97 && x[len] <= 122)
		{
			x[len] = x[len] - 32;
		}
		len++;
	}
	return (x);
}
