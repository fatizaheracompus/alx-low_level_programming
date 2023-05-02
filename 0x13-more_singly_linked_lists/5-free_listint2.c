#include "lists.h"

/**
 * free_listint2 - function that frees a listint_t list.
 * @head: The pointer for the first list
 *
 * Return: void.
 */
void free_listint2(listint_t **head)
{
listint_t *node, *c;

if (!head)
return;
node = *head;
while (node)
{
c = node;
node = node->next;
free(c);

}
*head = NULL;
}

