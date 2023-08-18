#include "lists.h"

/**
 * *add_dnodeint_end - adds a new node at the end of double list
 * @head: the adress of head
 * @n: int leave the new node
 *
 * Return: adress of new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *NEW = malloc(sizeof(dlistint_t)), *node;

	if (head == NULL || NEW == NULL)
		return (NEW ? free(NEW), NULL : NULL);

	NEW->n = n;
	NEW->next = NULL;
	if (*head == NULL)
	{
		NEW->prev = NULL;
		*head = NEW;
	}
	else
	{
		node = *head;
		while (node->next)
			node = node->next;

		node->next = NEW;
		NEW->prev = node;
	}
	return (NEW);
}
