#include "hash_tables.h"

/**
 * hash_table_get - function that Retrieve the value associated with
 *                  a key.
 * @ht: the value to the hash table.
 * @key: The key .
 *
 * Return: If the key cannot be found - NULL.
 *         Otherwise - the value associated with the element in ht.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *nd;
	unsigned long int indx;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	indx = key_index((const unsigned char *)key, ht->size);
	if (indx >= ht->size)
		return (NULL);

	nd = ht->array[indx];
	while (nd && strcmp(nd->key, key) != 0)
		nd = nd->next;

	return ((nd == NULL) ? NULL : nd->value);
}

