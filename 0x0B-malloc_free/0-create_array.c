#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars and initializes it with a given char
 * @c: the given char used for initialization of the array
 * @size: the size of the memory to be allocated to the array
 *
 * Return: Null on failure and the pointer to the array in success.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *str = (char*) malloc(size * sizeof(char));

	for (i = 0; i < size; i++)
	{
		str[i] = c;
	}
	return (str);
}
