#include "main.h"
#include <stdlib>

/**
 * strtow - splits a string into words
 * @str: given string
 *
 * Return: pointer to an array of strings(word)
 * NULL if @str is NULL or empty or on failure.
 */
char **strtow(char *str)
{
	int i, len;
	char **tow

		if (str == NULL || str[0] == '\0' || (str[0] == ' ' && str[1] == '\0'))
			return (NULL);
}
