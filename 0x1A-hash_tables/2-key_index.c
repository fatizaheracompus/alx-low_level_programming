#include "hash_tables.h"

/**
 *  key_index - function that give the index of key
 *  @key: key that get index
 *  @size: size of the array of hash table
 *
 *  Return: Index of key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
