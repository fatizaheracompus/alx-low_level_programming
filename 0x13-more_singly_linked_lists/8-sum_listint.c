#include "lists.h"

/**
 *  sum_listint - returns the sum of all the data (n).
 *  @head: the first node of the list
 *
 *  Return: sum
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
