#include "main.h"

/**
 * malloc_checked - function that allocates memory.
 * @b: integer
 *
 * Return: pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	int *n = malloc(b);

	if (n == 0)
	exit(98);

	return (n);
}
