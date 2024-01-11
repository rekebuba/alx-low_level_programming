
#include "lists.h"

/**
 * add_dnodeint_end - add node at the end
 * @head: head pointer
 * @n: data to insert
 * Return: final list
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
    dlistint_t *ptr = *head;
    dlistint_t *new_node = malloc(sizeof(dlistint_t));
    if (new_node == NULL)
        return (NULL);


    while (ptr != NULL)
    {
        ptr = ptr->next;
    }

    
}
