#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index
 * @head: head of listint_t
 * @index: index of the node
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
unsigned int i;
listint_t *previous = NULL;
listint_t *ptr = *head;
if (*head == NULL)
{
return (-1);
}

if (index == 0)
{
*head = ptr->next;
free(ptr);
return (1);
}

for (i = 0; ptr != NULL && i < index; i++)
{
previous = ptr;
ptr = ptr->next;
}

if (ptr == NULL)
{
return (-1);
}

previous->next = ptr->next;
free(ptr);

return (1);
}
