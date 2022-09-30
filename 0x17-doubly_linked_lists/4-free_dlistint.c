#include "lists.h"

/**
 * free_dlistint- frees a given linked list
 * @head: pointer to the given list to be freed
 *
 * Return: Nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
