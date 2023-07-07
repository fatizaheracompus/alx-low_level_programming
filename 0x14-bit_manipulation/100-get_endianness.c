#include "main.h"

/**
 * get_endianness - function that checks endiannes
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned long int m = 1;

	return (*(char *)&m);

}
