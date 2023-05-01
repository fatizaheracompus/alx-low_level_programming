#include "lists.h"

/**
 *  print_listint - function that prints all the elements
 *  @h: pointer to first node
 *
 *  Return: size of list
 */
size_t print_listint(const listint_t *h)
{
size_t m = 0;

while (h)
{
printf("%d\n", h->n);
h = h->next;
m++;
}
return (m);
}
