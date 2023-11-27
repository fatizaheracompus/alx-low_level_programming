#include "hash_tables.h"

/**
 * hash_table_print - function Prints a hash table.
 * @ht: A  hash table to print.
 *
 * Description: Key/value pair are printed in the order
 *              they appears in array of the hash table.
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *nd;
	unsigned long int a;
	unsigned char comm_flag = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (a = 0; a < ht->size; a++)
	{
		if (ht->array[a] != NULL)
		{
			if (comm_flag == 1)
				printf(", ");

			nd = ht->array[a];
			while (nd != NULL)
			{
				printf("'%s': '%s'", nd->key, nd->value);
				nd = nd->next;
				if (nd != NULL)
					printf(", ");
			}
			comm_flag = 1;
		}
	}
	printf("}\n");
}

