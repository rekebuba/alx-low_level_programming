#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table.
 *
 * @ht: the hash table
 * Return: Void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *ptr;
	char *last = NULL;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			ptr = ht->array[i];
			while (ptr != NULL)
			{
				last = ht->array[i]->value;
				ptr = ptr->next;
			}
		}
	}
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			ptr = ht->array[i];
			while (ptr != NULL)
			{
				printf("\'%s\': \'%s\'", ptr->key, ptr->value);
				if (ht->array[i]->value != last)
				{
					printf(", ");
				}
				ptr = ptr->next;
			}
		}
	}
	printf("}\n");
}
