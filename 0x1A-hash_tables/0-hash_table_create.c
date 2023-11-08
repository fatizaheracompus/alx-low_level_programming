#include "hash_tables.h"

/**
 * hash_table_create - function that create a hash table
 * @size: the size of the array
 *
 * Return: a pointer that create the hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int x;
	hash_table_t *hash_table;

	hash_table = malloc(sizeof(hash_table_t));
			if (!hash_table)
			return (NULL);
			hash_table->size = size;
			hash_table->array = malloc(size * sizeof(hash_node_t *));
			if (hash_table->array == NULL)
			{
			free(hash_table);
			return (NULL);
			}
			for (x = 0; x < size; x++)
			hash_table->array[x] = NULL;
			return (hash_table);
			}

