#include "lists.h"

/**
 * list_len - returns number of elements in a linked list.
 * @h: a pointer to struct list_t
 * Return: size_t
 */
size_t list_len(const list_t *h)
{
	const list_t *current = h;
	int count = 0;

	while (current != NULL)
	{
		current = current->next;
		count++;
	}
	return (count);
}
