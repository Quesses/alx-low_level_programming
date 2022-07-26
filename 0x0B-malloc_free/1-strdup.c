#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - allocates a new space to a pointer
 * description - the pointer contains a copy of the given string.
 * @str: the given string to be copied
 *
 * Return: a pointer to the new duplicated string or NULL on failure.
 */
char *_strdup(char *str)
{
	char *dup;
	int len = 0;
	int i;
	
	if (str == NULL)
		return (NULL);
	
	while (str[len] != '\0')
		len++;

	dup = (char *) malloc((sizeof(char) *len) +1);
	if (dup == NULL)
		return (NULL);
	
	for (i = 0; i < len; i++)
	{
		dup[i] = str[i];
	}
	dup[len] = '\0';
		
	return (dup);
}
