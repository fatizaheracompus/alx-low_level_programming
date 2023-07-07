#include "main.h"
/**
 * clear_bit - sets the value of bit to 0 at a given index.
 * @n: number to set.
 * @index: index of number to set.
 *
 * Return: 1 in sucess, -1 in failure.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);
	if (*n & 1L << index)
		*n ^= 1L << index;
	return (1);
}
