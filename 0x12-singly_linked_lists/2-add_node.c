#include "lists.h"


typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;

list_t *add_node(list_t **head, const char *str)
{
    list_t *current = malloc(sizeof(list_t));
    current->str = str;
    current->len = strlen(str);
    current->next = NULL;

    current->next = *head;
    *head = current;
}