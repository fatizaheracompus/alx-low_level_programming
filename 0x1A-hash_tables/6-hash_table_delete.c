#include "hash_tables.h"

/**
 * hash_table_delete - function Deletes a hash table.
 * @ht: is the hash table.
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *heade = ht;
	hash_node_t *nd, *temp;
	unsigned long int a;

	for (a = 0; a < ht->size; a++)
	{
		if (ht->array[a] != NULL)
		{
			nd = ht->array[a];
			while (nd != NULL)
			{
				temp = nd->next;
				free(nd->key);
				free(nd->value);
				free(nd);
				nd = temp;
			}
		}
	}
	free(heade->array);
	free(heade);
}

