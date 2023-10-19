#include "lists.h"

list_t *add_node_end(list_t **head, const char *str)
{
    char *duplicate;
    list_t *current = *head;
    list_t *end_node = malloc(sizeof(list_t));
    if (end_node == NULL)
    {
        return (NULL);
    }
    duplicate = strdup(str);
    if (duplicate == NULL)
    {
        return (NULL);
        free(end_node);
    }

    end_node->str = strdup(duplicate);
    end_node->len = strlen(duplicate);
    end_node->next = NULL;

    if (*head == NULL) 
    {
        *head = end_node;
        return (end_node);
    }

    while (current->next != NULL)
    {
        current = current->next;
    }
    current->next = end_node;

    return (end_node);
}

