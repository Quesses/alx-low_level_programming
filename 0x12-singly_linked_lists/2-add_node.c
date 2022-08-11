#include "lists.h"

/**
 * add_node - adds a node at the beginning of a linked list
 * @head: pointer pointing to the head of the linked list
 * @str: pointer to the string to be added to the node
 *
 * Return: the address of the new element, or NULL on failure
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));

	if (!new_node)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
