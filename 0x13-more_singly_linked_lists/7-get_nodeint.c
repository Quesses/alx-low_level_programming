#include "lists.h"

/**
 * get_nodeint_at_index - gets a node at a specific
 * index from a singly linked list
 * @head: pointer to head of the list
 * @index: data to be stored
 *
 * Return: pointer to new element
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head && i < index)
	{
		i++;
		head = head->next;
	}
	return (head);
}
