#include "lists.h"

size_t list_len(const list_t *h)
{
    const list_t *current = h;
    int count = 0;
    while (current->str != NULL)
    {
        current = current->next;
        count++;
    }
    return (count);
}