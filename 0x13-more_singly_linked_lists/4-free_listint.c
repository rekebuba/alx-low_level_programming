#include "lists.h"


void free_listint(listint_t *head)
{
    listint_t *ptr = head;
    listint_t *next;
    while (ptr != NULL)
    {
        next = ptr->next;
        free(ptr);
        ptr = next;
    }
}
