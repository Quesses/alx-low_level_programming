#include "hash_tables.h"

/**
 * hash_table_set - adds or updates an element in a hash table
 * @ht: pointer to the hash table to be updated
 * @key: key
 * @value: value associated with the key
 *
 * Return: 1 on success, otherwise 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx, i;
	char *val_dup, *key_dup;
	hash_node_t *new;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	val_dup = strdup(value);
	key_dup = strdup(key);
	if (val_dup == NULL || key_dup == NULL)
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);

	i = idx;
	while (ht->array[i++])
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = val_dup;
			return (1);
		}
	}

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
	{
		free(val_dup);
		return (0);
	}

	new->key = key_dup;
	new->value = val_dup;
	new->next = ht->array[idx];
	ht->array[idx] = new;
	return (1);
}
