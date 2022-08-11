#include "lists.h"

/**
 * free_list - frees the linked list
 * @head: pointer pointing to the linked list
 */

void free_list(list_t *head)
{
	list_t *tmp;

	while (head)
	{
		free(head->str);
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
