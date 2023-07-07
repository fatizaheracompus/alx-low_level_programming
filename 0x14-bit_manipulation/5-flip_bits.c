#include "main.h"

/**
 * flip_bits - return the number of bit you would need flip
 * @n: numbers of bit
 * @m: number to get flip.
 *
 * Return: numbers of bit
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int  xorvale = n ^ m;
	unsigned int ct = 0;

	while (xorvale)
	{
		if (xorvale & 1ul)
		{
		ct++;
		xorvale = xorvale >> 1;
		}
	}
	return (ct);
}
