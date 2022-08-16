#include "lists.h"

/**
 * free_listint2 - frees a linked list and setting the head to NULL
 * @head: pointer to head
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (!head)
		return;
	while (*head)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}
}
