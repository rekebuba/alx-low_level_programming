#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table.
 *
 * @ht: the hash table
 * Return: Void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, j;
	char *last = NULL;

	for (j = 0; j < ht->size; j++)
	{
		if (ht->array[j] != NULL)
			last = ht->array[j]->value;
	}
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			printf("\'%s\': \'%s\'", ht->array[i]->key, ht->array[i]->value);
			if (ht->array[i]->value != last)
			{
				printf(", ");
			}
		}
	}
	printf("}\n");
}
