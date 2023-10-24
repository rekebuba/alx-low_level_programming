#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: head of listint_t
 * @idx: index of the node
 * @n: the new node
 * Return: listint_t*
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int count = 0, total = 0;
listint_t *ptr = *head;
listint_t *temp;
listint_t *new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
{
return (NULL);
}
while (ptr != NULL)
{
ptr = ptr->next;
total++;
}
if (idx > total)
{
return (NULL);
}
ptr = *head;
while (count != idx)
{
ptr = ptr->next;
count++;
}
new_node->n = n;
temp = ptr->next;
ptr->next = new_node;
new_node->next = temp;
return (new_node);
}
