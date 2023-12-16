#include "lists.h"

/**
 * add_node - add a new node at the beginning.
 * @head: a double pointer to struct list_t
 * @str: the new string to be inserted
 * Return: list_t*
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
