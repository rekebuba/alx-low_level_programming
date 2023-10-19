#include "lists.h"

void free_list(list_t *head)
{
    list_t *temp = head;
    while (temp != NULL)
    {
        temp = head->next;
        free(head);
        head = temp;
    }
    free(temp);
}