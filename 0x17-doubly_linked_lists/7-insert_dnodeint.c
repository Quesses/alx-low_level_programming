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
	temp = *h;

	if (h == NULL)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));

	while (idx > 1)
	{
		temp = temp->next;
		if (temp == NULL)
			return (NULL);
		idx--;
	}
	if (temp->next == NULL)
		return (add_dnodeint_end(h, n));

	newnode = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = temp->next;
	newnode->prev = temp;
	temp->next->prev = newnode;
	temp->next = newnode;

	return (newnode);
}
