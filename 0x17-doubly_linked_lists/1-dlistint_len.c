#include "lists.h"

/**
 * dlistint_len - counts the number of elemenst in a given list
 * @h: pointer to the given list
 *
 * Return: number of elements in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}

	return (count);
}
