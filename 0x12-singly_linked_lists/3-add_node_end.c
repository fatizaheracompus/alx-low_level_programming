#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a linked list
 * @head: double pointer to the list_t list
 * @str: string to put in the new node
 *
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *newn;
list_t *curn = *head;
unsigned int len = 0;

while (str[len])
len++;

newn = malloc(sizeof(list_t));
if (newn == NULL)
return (NULL);

newn->str = strdup(str);
newn->len = len;
newn->next = NULL;

if (*head == NULL)
{
*head = newn;
return (newn);
}

while (curn->next)
curn = curn->next;

curn->next = newn;

return (newn);
}

