#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @key: unique key used to retrieve associated value
 * @ht: pointer to a hash table
 *
 * Return: the value, or NULL if key couldn’t be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;
	hash_node_t *new;
	char *value;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	idx = key_index((unsigned char *)key, ht->size);
	new = ht->array[idx];
	while (new != NULL && strcmp(new->key, key) != 0)
		new = new->next;
	value = new == NULL ? NULL : new->value;

	return (value);
}
