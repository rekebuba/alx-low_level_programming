
#include "lists.h"

/**
 * add_dnodeint_end - add node at the end
 * @head: head pointer
 * @n: data to insert
 * Return: final list
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *ptr = *head;
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	if (ptr == NULL)
	{
		new_node->n = n;
		new_node->next = NULL;
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}

	while (ptr->next != NULL)
	{
		ptr = ptr->next;
	}

	new_node->n = n;
	new_node->next = NULL;

	ptr->next = new_node;
	new_node->prev = ptr;

	return (new_node);
}
