#include "lists.h"

/**
 * delete_dnodeint_at_index - delete node at index
 * 
 * head: head to the list
 * index: index to be deleted
 * Return: 1 if it succeeded and -1 if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
    dlistint_t *ptr = *head;
    dlistint_t *temp1;
    dlistint_t *temp2;

    unsigned int count = 0;

    while (ptr != NULL && count < index)
    {
        ptr = ptr->next;
        count++;
    }
    printf("count = %d\n", count);
    if (ptr == NULL || count < index)
        return (-1);

    temp1 = ptr->prev;
    temp2 = ptr->next;
    free(ptr);
    temp1->next = temp2;
    temp2->prev = temp1;
    return (1);
}
