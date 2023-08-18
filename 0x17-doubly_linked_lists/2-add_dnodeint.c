#include "lists.h"

/**
 *  *add_dnodeint - add a new node at the beginning of double lists
 *  @head: adreess of pointer
 *  @n: int of ihe new node
 *
 *  Return: adress of the news node or NULL IF IT FAILED
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *NEW = malloc(sizeof(dlistint_t));

	if (!head || !NEW)
		return (NEW ? free(NEW), NULL : NULL);

	NEW->n = n;
	NEW->prev = NULL;
	if (*head == NULL)
	{
		*head = NEW;
		NEW->next = NULL;
	}
	else
	{
		NEW->next = *head;
		(*head)->prev = NEW;
		*head = NEW;
	}
	return (NEW);
}

