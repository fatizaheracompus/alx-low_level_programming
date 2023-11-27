#include "hash_tables.h"

/**
 * hash_table_set - set or add key in a hash table.
 * @ht: hash table to add key.
 * @key: The key to add for the data - cannot be an empty string.
 * @value: The data to store
 *
 * Return: 1 in successful
 *         Otherwise 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *hash_nd;
	char *nw_value;
	unsigned long int index, a;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	nw_value = strdup(value);
	if (nw_value == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	for (a = index; ht->array[a]; a++)
	{
		if (strcmp(ht->array[a]->key, key) == 0)
		{
			free(ht->array[a]->value);
			ht->array[a]->value = nw_value;
			return (1);
		}
	}

	hash_nd= malloc(sizeof(hash_node_t));
	if (hash_nd == NULL)
	{
		free(hash_nd);
		return (0);
	}
	hash_nd->key = strdup(key);
	if (hash_nd->key == NULL)
	{
		free(hash_nd);
		return (0);
	}
	hash_nd->value = nw_value;
	hash_nd->next = ht->array[index];
	ht->array[index] = hash_nd;

	return (1);
}

