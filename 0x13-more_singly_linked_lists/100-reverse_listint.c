#include "lists.h"

/**
 * reverse_listint - reverse a listint_t
 * @head: pointer to the first node.
 *
 * Return: Adress of the head.
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *node = NULL, *next = NULL;

	if (!head || !*head)
		return (NULL);
	node = *head;
	*head = NULL;
	while (node)
	{
		next = node->next;
		node->next = *head;
		*head = node;
		node = next;
	}
	return (*head);
}

