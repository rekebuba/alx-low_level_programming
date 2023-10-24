#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: head of listint_t
 * Return: the head node’s data
 */
int pop_listint(listint_t **head)
{
listint_t *ptr = *head;
int num = (*head)->n;;
if (*head == NULL)
{
return (0);
}
*head = (*head)->next;
free(ptr);
return (num);
}
