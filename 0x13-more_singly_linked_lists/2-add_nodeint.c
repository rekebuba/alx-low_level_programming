#include "lists.h"

/**
 * add_nodeint - 
 * @head: head of listint_t
 * @n: - the value to be added
 * Returns: listint_t* (new_node)
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new_nod = malloc(sizeof(listint_t));
if (new_nod == NULL)
{
return (NULL);
}
new_nod->n = n;
new_nod->next = *head;
*head = new_nod;
return (new_nod);
}
