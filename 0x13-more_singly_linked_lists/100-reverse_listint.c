#include "lists.h"

/**
 * reverse_listint - reverses a listint_t
 * @head: head of listint_t
 * Return: listint_t*
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *prev = NULL;
listint_t *current = *head;
listint_t *temp;
while (current != NULL)
{
temp = current->next;
current->next = prev;
prev = current;
current = temp;
}
*head = prev;
return (*head);
}
