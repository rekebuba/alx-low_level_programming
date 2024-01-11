#include "lists.h"

/**
 * delete_dnodeint_at_index - delete node at index
 *
 * @head: head to the list
 * @index: index to be deleted
 * Return: 1 if it succeeded and -1 if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *ptr = *head;
	dlistint_t *temp1;

	unsigned int count = 0;

	while (ptr != NULL && count < index)
	{
		ptr = ptr->next;
		count++;
	}

	if (*head == NULL || dlistint_len(ptr) < index + 1)
		return (-1);

	if (!index)
	{
		(*head) = ptr->next;
		if (ptr->next)
			ptr->next->prev = NULL;
		ptr->next = NULL;
		free(ptr);
		return (1);
	}
	if (index != 0)
	{
		temp1 = ptr->prev;
		temp1->next = ptr->next;
		temp1->next->prev = ptr;
	}
	free(ptr);
	return (1);
}
