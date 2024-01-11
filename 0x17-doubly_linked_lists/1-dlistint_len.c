#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked  list.
 * @h: double node
 * Return: size_t
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *temp = h;

	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	}
	return (count);
}
