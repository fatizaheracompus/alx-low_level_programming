#include "lists.h"

/**
 * print_dlistint - function that prints all the elements.
 * @h: pointer
 *
 * Return:  the number of nodes.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t m = 0;

	while (h != 0)
	{
		printf("%d\n", h->n);
		h = h->next;
		m++;
	}
	return (m);
}


