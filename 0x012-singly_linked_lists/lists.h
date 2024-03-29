#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct list_s - singly linked list
 * @str: string (malloc'ed)
 * @len: length of the string
 * @next: pointer that points to the next node
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
};

typedef struct list_s list_t

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);

#endif
