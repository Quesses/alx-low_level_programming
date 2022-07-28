#include "main.h"
#include <stdlib.h>
#include <limits.h>

/**
 * malloc_checked - allocates a dynamic memory
 * @b: size of memory to be created
 *
 * Return: pointer to the memory space created
 */

void *malloc_checked(unsigned int b)
{
	int *x;

	x = malloc(b);
	if (x == NULL)
		exit(98);

	return (x);
}
