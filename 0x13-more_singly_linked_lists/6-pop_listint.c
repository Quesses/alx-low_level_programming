#include "lists.h"

/**
 * pop_listint - removes the head of a linked list
 * @head: pointer to head
 *
 * Return: data of the head and 0 if list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int retval;

	if (!head || !(*head))
		return (0);
	tmp = (*head)->next;
	retval = (*head)->n;
	free(*head);
	*head = tmp;
	return (retval);
}
