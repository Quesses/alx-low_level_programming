#include "lists.h"

/**
 * get_dnodeint_at_index- returns the nth node of a given linked list
 * @head: head pointer
 * @index: index of the node to be returned
 *
 * Return: add to the indexed node or NULL if node does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);
	while (index > count)
	{
		head = head->next;
		count++;
	}
	return (head);
}
