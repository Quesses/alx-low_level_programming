#include "list.h"

/**
 * print_dlistint - prints all the elements in a given linked list
 * @h: constant pointer to be printed
 *
 * Return: number of nodes printed
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf("%d", h->n);
		count++;
		h = h->next;
	}

	return (count);
}
