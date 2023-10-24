#include "lists.h"

/**
 * get_nodeint_at_index - Get the nodeint at index object
 * @head: head of listint_t
 * @index: index of the node
 * Returns: the nth node of listint_t* 
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
listint_t *ptr = head;
unsigned int count = 0;
if (ptr == NULL)
{
return (NULL);
}
while (count != index)
{
ptr = ptr->next; 
count++;
}
return (ptr);
}
