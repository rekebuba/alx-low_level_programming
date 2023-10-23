#include "lists.h"

/**
 * print_listint - prints all elements of listint_t
 * @h: struct type
 * @return size_t (the number of nodes)
 */
size_t print_listint(const listint_t *h)
{
    listint_t *temp;
    size_t count = 0;
    temp = h;
    while (temp != NULL)
    {
        printf("%d", h->n);
        temp->n = h->next;
        count++;
    }
    return (count);
}