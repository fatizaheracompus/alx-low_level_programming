#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - function that adds a new node at the end
 * of a list_t list.
 * @head: head of linked list.
 * @str: string to put in the new node
 *
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *newn, *curn;
size_t n;

newn = malloc(sizeof(list_t));
if (newn == NULL)
return (NULL);

newn->str = strdup(str);
for (n = 0; str[n]; n++)

newn->len = n;
newn->next = NULL;
curn = *head;

if (*head == NULL)
{
*head = newn;
return (newn);
}

while (curn->next != NULL)
curn = curn->next;

curn->next = newn;

return (*head);
}

