#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a given list.
 * @head: pointer to the given list
 * @n: integer value to be contained in the added node
 *
 * Return:  the address of the new node, or NULL on failure
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode, *temp;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}	
	temp = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = newnode;
	newnode->prev = temp;
	newnode->next = NULL;
	return (newnode);
}
