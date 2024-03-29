#include "hash_tables.h"

/**
 * hash_djb2 - hash function that implements the djb2 algorithm
 * @str: a string used to generate a unique key for the hash table
 *
 * Return: a unique int key (hash) for hashing
 */
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
