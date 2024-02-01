#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 *
 * ht: hash table you want to add or update the key/value to
 * key: is the key
 * value: associated with the key
 * @return int
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
    unsigned long a;
    if (key == NULL)
        return (0);

    a = key_index((unsigned char *)key, 1024);

    if (!add_nodeint(&ht->array[a], key, value))
        return (0);

    return (1);
}

/**
 * add_nodeint - adds a new node at the beginning
 * @key: the key
 * @value: - the value
 * Return: listint_t* (new_node)
 */
hash_node_t *add_nodeint(hash_node_t **head, const char *key, const char *value)
{
    hash_node_t *new_nod = malloc(sizeof(hash_node_t));

    if (new_nod == NULL)
    {
        return (NULL);
    }
    new_nod->key = (char *)key;
    new_nod->value = (char *)value;
    new_nod->next = *head;
    *head = new_nod;
    return (new_nod);
}
