#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - array for prints string
 * @b: number of memory
 * Return: a pointer to the allocate memor:y
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (p == NULL)

		exit(98);


	return (p);
}
