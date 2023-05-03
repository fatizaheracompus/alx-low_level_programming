#include "lists.h"
#include <stdlib.h>

/**
 * find_listint_loop - find a loop in linked list.
 * @head: linked list
 *
 * Return: adress of node where loops start/NULL if no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *pt, *end;

	if (head == NULL)
		return (NULL);
	for (end = head->next; end != NULL; end = end->next)
	{
		if (end == end->next)
			return (end);
		for (pt = head; pt != end; pt = pt->next)
			if (pt == end->next)
				return (end->next);
	}
	return (NULL);
}

/**
 * free_listint_safe - function that frees a listint_t list.
 * @h: the pointer for the first node.
 *
 * Return: the size of the list free.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *next, *lopnode;
	size_t len;
	int loop = 1;

	if (h == NULL || *h == NULL)
		return (0);

	lopnode = find_listint_loop(*h);
	for (len = 0; (*h != lopnode || loop) && *h != NULL; *h = next)
	{
		len++;
		next = (*h)->next;
		if (*h == lopnode && loop)
		{
			if (lopnode == lopnode->next)
			{
				free(*h);
				break;
			}
			len++;
			next = next->next;
			free((*h)->next);
			loop = 0;
		}
		free(*h);
	}
	*h = NULL;
	return (len);
}
