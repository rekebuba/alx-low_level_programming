#include "lists.h"

/**
 * add_dnodeint - add node at the beginning of a list
 *
 * head: head pointer to a list
 * n: the data to be added
 * Return: pointer to a new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
    dlistint_t *temp = *head;
    dlistint_t *new_node = malloc(sizeof(dlistint_t));

    if (new_node == NULL)
        return (NULL);

    if (temp == NULL)
    {
        new_node->n = n;
        new_node->next = NULL;
        new_node->prev = NULL;
        *head = new_node;
    }
    else
    {
        new_node->n = n;
        new_node->next = temp;
        temp->prev = new_node;
        new_node->prev = NULL;
        *head = new_node;
    }
    return (new_node);
}
