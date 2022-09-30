#include "lists.h"

/**
 * sum_dlistint - sum all the values stored in a given linked list
 * @head: head pointer to the list
 *
 * Return: sum total
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
