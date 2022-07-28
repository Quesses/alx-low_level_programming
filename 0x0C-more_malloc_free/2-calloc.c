#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory dynamically for an array
 * @nmemb: lenght of the array
 * @size: size of the memory
 *
 * Return: a pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = calloc(nmemb, size);
	if (p == NULL)
		return (NULL);
	return (p);
}
