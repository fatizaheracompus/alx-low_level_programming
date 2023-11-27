#include "hash_tables.h"

shash_table_t *shash_table_create(unsigned long int size);
int shash_table_set(shash_table_t *ht, const char *key, const char *value);
char *shash_table_get(const shash_table_t *ht, const char *key);
void shash_table_print(const shash_table_t *ht);
void shash_table_print_rev(const shash_table_t *ht);
void shash_table_delete(shash_table_t *ht);

/**
 * shash_table_create - function create a sorted hash table.
 * @size: The size of new  hash table.
 *
 * Return: If an errore occur - NULL.
 *         Otherwise - a pointer of the new hash table.
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ht;
	unsigned long int a;

	ht = malloc(sizeof(shash_table_t));
	if (ht == NULL)
		return (NULL);

	ht->size = size;
	ht->array = malloc(sizeof(shash_node_t *) * size);
	if (ht->array == NULL)
		return (NULL);
	for (a = 0; a < size; a++)
		ht->array[a] = NULL;
	ht->shead = NULL;
	ht->stail = NULL;

	return (ht);
}

/**
 * shash_table_set - function that adds an element to a sorted hash table.
 * @ht: the pt to the sorted hash table.
 * @key: The key to be  add - cannot be an empty string.
 * @value: The value associat with key.
 *
 * Return: in failure - 0.
 *         Otherwise - 1.
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *nw, *temp;
	char *nw_value;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	nw_value = strdup(value);
	if (nw_value == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	temp = ht->shead;
	while (temp)
	{
		if (strcmp(temp->key, key) == 0)
		{
			free(temp->value);
			temp->value = nw_value;
			return (1);
		}
		temp = temp->snext;
	}

	nw = malloc(sizeof(shash_node_t));
	if (nw == NULL)
	{
		free(nw_value);
		return (0);
	}
	nw->key = strdup(key);
	if (nw->key == NULL)
	{
		free(nw_value);
		free(nw);
		return (0);
	}
	nw->value = value;
	nw->next = ht->array[index];
	ht->array[index] = nw;

	if (ht->shead == NULL)
	{
		nw->sprev = NULL;
		nw->snext = NULL;
		ht->shead = nw;
		ht->stail = nw;
	}
	else if (strcmp(ht->shead->key, key) > 0)
	{
		nw->sprev = NULL;
		nw->snext = ht->shead;
		ht->shead->sprev = nw;
		ht->shead = nw;
	}
	else
	{
		temp = ht->shead;
		while (temp->snext != NULL && strcmp(temp->snext->key, key) < 0)
			temp = temp->snext;
		nw->sprev = temp;
		nw->snext = temp->snext;
		if (temp->snext == NULL)
			ht->stail = nw;
		else
			temp->snext->sprev = nw;
		tp->snext = nw;
	}

	return (1);
}

/**
 * shash_table_get - fnct Retrieve the value associated with
 *                   a key in hash table.
 * @ht: A  hash table.
 * @key: The key to get the val.
 *
 * Return: If the key cannot be found - NULL.
 *         Otherwise - the value associat with key in ht.
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *nd;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);

	nd = ht->shead;
	while (nd!= NULL && strcmp(nd->key, key) != 0)
		nd = nd->snext;

	return ((nd == NULL) ? NULL : nd->value);
}

/**
 * shash_table_print - funct Prints a sort hash table in order.
 * @ht: A  hash table.
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *nd;

	if (ht == NULL)
		return;

	nd = ht->shead;
	printf("{");
	while (nd != NULL)
	{
		printf("'%s': '%s'", nd->key, nd->value);
		nd = nd->snext;
		if (nd != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - function Prints  hash table in reverse order.
 * @ht: A sorted hash table to print.
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *nd;

	if (ht == NULL)
		return;

	nd = ht->stail;
	printf("{");
	while (nd != NULL)
	{
		printf("'%s': '%s'", nd->key, nd->value);
		nd = nd->sprev;
		if (nd != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_delete - function deletes  hash table.
 * @ht: A  hash table.
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_table_t *head = ht;
	shash_node_t *nd, *temp;

	if (ht == NULL)
		return;

	nd = ht->shead;
	while (nd)
	{
		temp = nd->snext;
		free(nd->key);
		free(nd->value);
		free(nd);
		nd = temp;
	}

	free(head->array);
	free(head);
}

