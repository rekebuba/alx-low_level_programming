#include "lists.h"

/**
 * free_listint2 - 
 * 
 * @param head 
 */
void free_listint2(listint_t **head)
{
    listint_t *ptr = *head;
    listint_t *next;

    while (ptr != NULL)
    {
        next = ptr->next;
        free(ptr);
        ptr = next;
    }
}
