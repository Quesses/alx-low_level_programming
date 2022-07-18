#include "main.h"
#include <string.h>

/**
 * _strchr - locates a character in a string
 * @s: pointer to the string
 * @c: character to be located
 *
 * Return: pointer to the located character or NULL if char not found.
 */
char *_strchr (char *s, char c)
{
	int x;

	for (x = 0; *(s + x) != '\0'; x++)
	{
		if (s[x] == c)
			return (s);
		else
			return (NULL);
	}
}
