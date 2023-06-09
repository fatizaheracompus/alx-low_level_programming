#include "main.h"

/**
 * set_bit - set the value of a bit to 1 at index
 * @n: pointer of number
 * @index: the index of a number to set.
 *
 * Return: 1 in sucess, -1 in failure.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);
	return (!!(*n |= 1L << index));
}
