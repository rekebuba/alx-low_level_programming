#include "lists.h"

/**
 * free_listint2 - frees a listint_t list.
 * @head: head of listint_t
 * return: void
 */
void free_listint2(listint_t **head)
{
listint_t *ptr = *head;
listint_t *next;
if (ptr == NULL)
{
return;
}
while (ptr != NULL)
{
next = ptr->next;
free(ptr);
ptr = next;
}
free(next);
*head = NULL;
}
