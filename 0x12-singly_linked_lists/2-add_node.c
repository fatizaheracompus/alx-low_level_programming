#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list
 * @head:the original linked list
 * @str: the string to add to the node
 *
 * Return: the address of the new list or NULL IF it failed
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *newn;
int length = 0;

newn = malloc(sizeof(list_t));
if (newn == NULL)
return (NULL);

while (str[length])
length++;

newn->str = strdup(str);
newn->len = length;
newn->next = (*head);
*head = newn;

return (newn);
}



