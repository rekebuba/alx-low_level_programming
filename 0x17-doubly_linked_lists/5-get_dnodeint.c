#include "lists.h"

/**
 * get_dnodeint_at_index - Get the dnodeint at index object
 *
 * @head: pointer to the head
 * @index: location to the node
 * Return: the desired node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *ptr = head;
	unsigned int count = 0;

	while (ptr != NULL && count < index)
	{
		ptr = ptr->next;
		count++;
	}

	if (ptr == NULL)
		return (NULL);

	return (ptr);
}
