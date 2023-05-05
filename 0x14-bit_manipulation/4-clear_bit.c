#include "main.h"

/**
 * clear_bit - Sets the value of a bit to 0 at a given index.
 * @n:Number to set.
 * @index: The bit you want to set
 *
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	if (*n & 1l << index)
		*n ^= 1l << index;
	return (1);
}
