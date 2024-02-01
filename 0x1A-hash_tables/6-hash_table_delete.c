#include "hash_tables.h"

/**
 * hash_table_delete - free all hash table
 * @ht: the hash table
 * Return: Void
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *ptr;
	hash_node_t *next;

	for (i = 0; i < ht->size; i++)
	{
		ptr = ht->array[i];
		while (ptr != NULL)
		{
			next = ptr->next;
			free(ptr->value);
			free(ptr->key);
			free(ptr);
			ptr = next;
		}
		free(ptr);
	}
	free(ht->array);
	free(ht);
}
