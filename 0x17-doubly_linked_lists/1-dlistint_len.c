#include "lists.h"

/**
 *  dlistint_len - return the numbers of elements
 *  @h : poiter of adress of node
 *
 *  Return: numbers of elements.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t m = 0;

	while (h != 0)
	{
		h = h->next;
		m++;
	}
	return (m);
}
