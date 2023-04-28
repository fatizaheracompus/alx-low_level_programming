#include <stdlib.h>
#include "lists.h"
#include <stdio.h>

/**
 * list_len - show the number of element of a list
 * @h: linked list
 *
 * Return: The number of element of a list
 */
size_t list_len(const list_t *h)
{
size_t cou = 0;

while (h)
{
h = h->next;
cou++;

}
return (cou);
}

