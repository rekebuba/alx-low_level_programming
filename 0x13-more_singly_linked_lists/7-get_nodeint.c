#include "lists.h"

/**
 * get_nodeint_at_index - Get the nodeint at index object
 * @head: head of listint_t
 * @index: index of the node
 * Return: the nth node of listint_t*
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;
	unsigned int count = 0;

	while (current != NULL)
	{
		if (count == index)
		{
			return (current);
		}
		count++;
		current = current->next;
	}
	return (NULL);
}
