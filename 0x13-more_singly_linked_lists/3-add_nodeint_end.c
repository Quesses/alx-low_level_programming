#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of a singly linked list
 * @head: pointer to head of the list
 * @n: data to be stored
 *
 * Return: pointer to new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode;
	listint_t *tmp = *head;

	newNode = malloc(sizeof(*newNode));
	if (newNode)
	{
		newNode->n = n;
		newNode->next = NULL;
		if (!(*head))
		{
			*head = newNode;
			return (newNode);
		}
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = newNode;
	}

	return (newNode);
}
