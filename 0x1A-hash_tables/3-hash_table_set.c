#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table you want to add or update the key/value to
 * @key: is the key
 * @value: associated with the key
 * Return: 1 if succeeded 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long index;

	if (key == NULL)
		return (0);

	index = key_index((unsigned char *)key, ht->size);

	if (!add_nodeint(&ht->array[index], key, value))
		return (0);

	return (1);
}

/**
 * add_nodeint - adds a new node at the beginning
 * @head: head of the node
 * @key: the key
 * @value: - the value
 * Return: new_node
 */
hash_node_t *add_nodeint(hash_node_t **head, const char *key,
						 const char *value)
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
