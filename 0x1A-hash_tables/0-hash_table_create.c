#include "hash_tables.h"

/**
 * hash_table_create - a function that creates a hash table
 * @size: the size of the hash table
 *
 * Return: returns a pointer to the newly created hash_table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table;
	unsigned int i;

	hash_table = malloc(sizeof(hash_table_t));
	if (hash_table == NULL)
		return (NULL);

	hash_table->size = size;
	hash_table->array = calloc(sizeof(hash_node_t *), size);
	if (hash_table->array == NULL)
		return (NULL);
	
	for (i = 0; i < hash_table->size; i++)
		hash_table->array[i] = NULL;

	return (hash_table);
}
