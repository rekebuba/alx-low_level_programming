#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
/**
 * struct hash_node_s - Node of a hash table
 *
 * @key: The key, string
 * The key is unique in the HashTable
 * @value: The value corresponding to a key
 * @next: A pointer to the next node of the List
 */
typedef struct hash_node_s
{
	char *key;
	char *value;
	struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - Hash table data structure
 *
 * @size: The size of the array
 * @array: An array of size @size
 * Each cell of this array is a pointer to the first node of a linked list,
 * because we want our HashTable to use a Chaining collision handling
 */
typedef struct hash_table_s
{
	unsigned long int size;
	hash_node_t **array;
} hash_table_t;

hash_table_t *hash_table_create(unsigned long int size);
unsigned long int hash_djb2(const unsigned char *str);
unsigned long int key_index(const unsigned char *key, unsigned long int size);
int hash_table_set(hash_table_t *ht, const char *key, const char *value);
char *hash_table_get(const hash_table_t *ht, const char *key);
void hash_table_print(const hash_table_t *ht);
void hash_table_delete(hash_table_t *ht);
hash_node_t *add_nodeint(hash_node_t **head, const char *key, const char *value);

int main(void)
{
	hash_table_t *ht;

	ht = hash_table_create(1024);
	printf("%d\n", hash_table_set(ht, "hetairas", "A"));
	printf("%d\n", hash_table_set(ht, "mentioner", "B"));
	printf("%d\n", hash_table_set(ht, "betty", "C"));
	return (EXIT_SUCCESS);
}

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

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
    unsigned long int index;
    unsigned long value = hash_djb2(key);
    index = value % size;
    return (index);

}

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *table = malloc(sizeof(hash_node_t));
	if (!table)
		return (NULL);

	table->size = size;
	table->array = malloc(sizeof(hash_table_t *) * size);
	if (!table->array)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		table->array[i] = NULL;
	}
	return (table);
}


unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash);
}
