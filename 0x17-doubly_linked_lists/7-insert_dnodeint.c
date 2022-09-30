#include "lists.h"

/**
 * insert_dnodeint_at_index- inserts a new node at a given position
 * @h: head pointer
 * @idx: index position to insert the node
 * @n: integer value to be contained in the added node
 *
 * Return: add to the new node or NULL if node could not be added
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newnode, *temp;
	unsigned int count = 0;

	if (h == NULL)
		return (NULL);
	newnode = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	if (*h == NULL && idx == 0)
	{
		*h = newnode;
		return (newnode);
	}
	temp = *h;
	while (temp)
	{
		temp = temp->next;
		count++;
		if (count == idx)
		{
			newnode->next = temp->next
			temp->next->prev = newnode;
			temp->next = newnode;
			newnode->prev = temp
		}
	}

	return (newnode);
}