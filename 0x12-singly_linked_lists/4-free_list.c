#include "lists.h"

void free_list(list_t *head)
{
    list_t *temp = head;
    while (temp != NULL)
    {
        head = temp->next;
        free(temp->str);
        free(temp);
        temp = head;
    }
}