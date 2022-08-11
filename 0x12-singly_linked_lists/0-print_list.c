#include "lists.h"

/**
 * print_list - prints all the elements of a linked list
 * @h: head of the linked list
 *
 * Return: number of nodes of the linked list
 */

size_t print_list(const list_t *h)
{
	int count = 0;

	while (h)
	{
		h->str == NULL ? printf("[0] (nil)\n") : printf("[%d] %s\n", h->len, h->str);
		count++;
		h = h->next;
	}
	return (count);
}
