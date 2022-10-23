#include "hash_tables.h"

/**
 * hash_table_print - prints the hash table
 * @ht: the hash table to be printed
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *new;
	unsigned long int i;
	bool comma_flag = false;

	if (ht == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		new = ht->array[i];
		while (new != NULL)
		{
			if (comma_flag == true)
				printf(", ");
			printf("'%s' : '%s'", new->key, new->value);
			new = new->next;
			if (new != NULL)
				printf(", ");
			comma_flag = true;
		}
	}
	printf("}\n");
}
