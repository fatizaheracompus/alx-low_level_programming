#include "main.h"

/**
 * get_endianness - function that checks the endianness.
 *
 * Return: o if big endian, 1 if little endian.
 */

int get_endianness(void)
{
	unsigned long int n = 1;

	return (*(char *)&n);
}
