#include "lists.h"

/**
 * sum_listint -
 * 
 * @head:
 * Return: int 
 */
int sum_listint(listint_t *head)
{
    int sum = 0;
    listint_t *ptr = head;
    if (ptr == NULL)
    {
        return (0);
    }
    while (ptr != NULL)
    {
        sum += ptr->n;
        ptr = ptr->next;
    }
    return (sum);
}