#include "lists.h"

/**
 * free_listint - frees a listint_t list.
 * @head: head of listint_t
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *ptr = head;
	listint_t *next;

	while (ptr != NULL)
	{
		next = ptr->next;
		free(ptr);
		ptr = next;
	}
}
