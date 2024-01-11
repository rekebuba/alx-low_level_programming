#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * 
 * h: the head to the list
 * idx: the index of the list
 * n: the data that will be inserted
 * Return: the updated node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
    dlistint_t *ptr = *h;
    dlistint_t *temp;
    dlistint_t *new_node = malloc(sizeof(dlistint_t));

    unsigned int count = 1;

    if (ptr == NULL)
        return (NULL);

    while (ptr != NULL && count < idx)
    {
        ptr = ptr->next;
        count++;
    }

    if (count < idx)
        return (NULL);

    temp = ptr->next;

    new_node->n = n;
    ptr->next = new_node; 
    new_node->prev = ptr;
    new_node->next = temp;
    temp->prev = new_node;

    return (new_node);

}
