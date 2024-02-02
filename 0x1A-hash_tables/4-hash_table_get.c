#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key.
 *
 * @ht: the hash table to look into
 * @key: the key to look for
 * Return: the value or NULL if key couldn't be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *ptr;

	if (key == NULL)
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);
	if (ht->array[index] == NULL)
		return (NULL);
	ptr = ht->array[index];
    while (ptr != NULL)
    {
        if (strcmp(ptr->key, key))
            return (ptr->value);
        ptr = ptr->next;
    }
	return (NULL);
}
