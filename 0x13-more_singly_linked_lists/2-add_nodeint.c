#include "lists.h"

/**
 * add_nodeint - adds a node at the beginning of a singly linked list
 * @head: pointer to head of the list
 * @n: data to be stored
 *
 * Return: pointer to new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(*newNode));
	if (newNode)
	{
		newNode->n = n;
		newNode->next = *head;
		*head = newNode;
	}

	return (newNode);
}
