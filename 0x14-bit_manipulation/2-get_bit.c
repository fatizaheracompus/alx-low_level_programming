#include "main.h"

/**
 * get_bit - Write a function that returns the value of a bit at a given index.
 * @n: the number of index
 * @index: the bit to be get.
 *
 * Return: the bit given or -1 on error
 */
int get_bit(unsigned long int n,  unsigned int index)
{
	if (index >= sizeof(n) * 8)
	{
		return (-1);
	}

		return (n >> index & 1);
}
