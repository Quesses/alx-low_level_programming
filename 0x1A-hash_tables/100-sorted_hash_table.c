#include "hash_tables.h"

/**
 * shash_table_create - creates a sorted hash table of size @size
 * @size: size of the hash table
 *
 * Return: NULL on failure, otherwise pointer to the hash table
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ht;
	unsigned long int i;

	ht = malloc(sizeof(shash_table_t));
	if (ht == NULL)
		return (NULL);

	ht->size = size;
	ht->array = malloc(size * sizeof(shash_node_t *));
	if (ht->array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		ht->array[i] = NULL;
	ht->shead = NULL;
	ht->stail = NULL;

	return (ht);
}

/**
 * shash_table_set - adds or updates an element in a sorted hash table
 * @ht: pointer to the sorted hash table to be updated
 * @key: key
 * @value: value associated with the key
 *
 * Return: 1 on success, otherwise 0
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	char *val_dup, *key_dup;
	shash_node_t *new, *temp;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	val_dup = strdup(value);
	key_dup = strdup(key);
	if (val_dup == NULL || key_dup == NULL)
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);
	temp = ht->shead;
	while (temp)
	{
		if (strcmp(temp->key, key) == 0)
		{
			free(temp->value);
			temp->value = val_dup;
			return (1);
		}
		temp = temp->snext;
	}
	new = malloc(sizeof(shash_node_t));
	if (new == NULL)
	{
		free(val_dup);
		return (0);
	}
	new->key = key_dup;
	new->value = val_dup;
	new->next = ht->array[idx];
	ht->array[idx] = new;

	if (ht->shead == NULL)
	{
		new->sprev = NULL;
		new->snext = NULL;
		ht->shead = new;
		ht->stail = new;
	}
	else if (strcmp(ht->shead->key, key) > 0)
	{
		new->sprev = NULL;
		new->snext = ht->shead;
		ht->shead->sprev = new;
		ht->shead = new;
	}
	else
	{
		temp = ht->shead;
		while (temp->snext != NULL && strcmp(temp->snext->key, key) < 0)
			temp = temp->snext;
		new->sprev = temp;
		new->snext = temp->snext;
		if (temp->snext == NULL)
			ht->stail = new;
		else
			temp->snext->sprev = new;
		temp->snext = new;
	}

	return (1);
}


/**
 * shash_table_get - retrieves the value associated with a key
 * @key: unique key used to retrieve associated value
 * @ht: pointer to a sorted hash table
 *
 * Return: the value, or NULL if key couldn’t be found
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int idx;
	shash_node_t *new;
	char *value;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	idx = key_index((unsigned char *)key, ht->size);
	if (idx >= ht->size)
		return (NULL);

	new = ht->shead;
	while (new != NULL && strcmp(new->key, key) != 0)
		new = new->next;
	value = new == NULL ? NULL : new->value;

	return (value);
}


/**
 * shash_table_print - prints a sorted hash table
 * @ht: the hash table to be printed
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *new;

	if (ht == NULL)
		return;

	new = ht->shead;
	printf("{");
	while (new != NULL)
	{
		printf("'%s': '%s'", new->key, new->value);
		new = new->snext;
		if (new != NULL)
			printf(", ");
	}
	printf("}\n");
}


/**
 * shash_table_delete - deletes a sorted hash table
 * @ht: hash table to be deleted
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *temp, *node;
	shash_table_t *hash = ht;

	if (ht == NULL)
		return;

	node = ht->shead;
	while (node != NULL)
	{
		temp = node->snext;
		free(node->key);
		free(node->value);
		free(node);
		node = temp;
	}
	free(hash->array);
	free(hash);
}


/**
 * shash_table_print_rev - prints the sorted hash table in reverse
 * @ht: the hash table to be printed
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *new;

	if (ht == NULL)
		return;

	new = ht->stail;
	printf("{");
	while (new != NULL)
	{
		printf("'%s': '%s'", new->key, new->value);
		new = new->sprev;
		if (new != NULL)
			printf(", ");
	}
	printf("}\n");
}
