#include "lists.h"

/**
 * delete_nodeint_at_index - 
 * 
 * @head:
 * @index:
 * Returns: int 
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
    unsigned int count = 0;
    listint_t *ptr = *head;
    listint_t *temp = *head;
    while (count != index)
    {
        ptr = ptr->next;
        count++;
    }
    while(count)
    temp = ptr->next;

    free(ptr);

}