#include "lists.h"

int pop_listint(listint_t **head)
{
    listint_t *ptr = *head;
    listint_t *next;
    int num = ptr->n;
    next = ptr->next;
    free(ptr);
    *head = next;
    return (num);
}