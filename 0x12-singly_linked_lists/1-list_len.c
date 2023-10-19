#include "lists.h"

size_t list_len(const list_t *h)
{
    const list_t *len = h;
    int count = 0;
    while (len != NULL)
    {
        count++;
    }
    return (count);
}