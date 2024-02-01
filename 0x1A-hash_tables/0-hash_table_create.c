#include "hash_tables.h"

/**
 * hash_table_create - fuction that creates a hash table
 * @size: the size of the array
 * Return: a pointer to the newly created hash table 
 */
hash_table_t *hash_table_create(unsigned long int size)
{
    hash_table_t *array = malloc(sizeof(hash_node_t) * size); 
    return (array);
}
