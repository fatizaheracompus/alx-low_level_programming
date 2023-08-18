#include "lists.h"

/**
 * free_dlistint - free the linked list
 * @head: adrees of node
 *
 * Return: voi/
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *node;

	while (head != 0)
	{
		node = head;
		head = head->next;
		free(node);
	}
}
