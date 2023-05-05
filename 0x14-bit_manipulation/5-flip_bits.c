#include "main.h"

/**
 * flip_bits - returns the number of bits you would:
 *need to flip to get from one number to another.
 *@n: number to flip.
 * @m: Second number to flip.
 * Return: Number of bit to flip.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flix = n ^ m;
	unsigned int ct = 0;

	while (flix)
	{
		if (flix & 1uL)
			ct++;
		flix = flix >> 1;
	}

	return (ct);

}


