#include "hash_tables.h"

/**
 * key_index - gives the index of a hash key
 * @key: hash key
 * @size: size of the array of the hash table
 *
 * Return: index of a key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int i, index;

	i = hash_djb2(key);
	index = i % size;

	return (index);
}
