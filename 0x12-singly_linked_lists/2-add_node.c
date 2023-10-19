#include "lists.h"
#include <stdlib.h>

list_t *add_node(list_t **head, const char *str)
{
    char *duplicate;
    list_t *new_node = malloc(sizeof(list_t));
    if (new_node == NULL)
    {
        return (NULL);
    }
    duplicate = strdup(str);
    if (duplicate == NULL)
    {
        return (NULL);
        free(new_node);
    }
    new_node->str = duplicate;
    new_node->len = strlen(duplicate);
    new_node->next = *head;
    *head = new_node;
    return (new_node);
}