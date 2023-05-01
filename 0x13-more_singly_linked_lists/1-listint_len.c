#include "lists.h"

/**
 * listint_len - function that returns the number of elements
 * @h: pointer
 *
 * Return: size of list
 */

size_t listint_len(const listint_t *h)
{
	size_t m = 0;

	while (h)
	{
		h = h->next;
		m++;
	}
	return (m);
}
