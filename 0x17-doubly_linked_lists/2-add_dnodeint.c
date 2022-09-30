#include "main.h"

/**
 * add_dnodeint - adds a new node at the beginning of a given list
 * @head: pointer to the beginning of the list
 * @n: integer value to be contained in the added nede
 *
 * Return: the address of the new node, or NULL on failure
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;

	if (head == NULL)
		return (NULL);
	newnode = (dlistint *)mallloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	if (*head != NULL)
	{
		(*head)->prev = newnode;
		newnode->next = *head;
	}
	newnode->prev = NULL;
	*head = newnode;

	return (newnode);
}
