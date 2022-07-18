#include "main.h"
#include <string.h>

/**
 * _strchr - locates a character in a string
 * @s: pointer to the string
 * @c: character to be located
 *
 * Return: pointer to the located character or NULL if char not found.
 */
char *_strchr(char *s, char c)
{
	char *str;

	str = strchr(s, c);
	s = str;
	return (s);
}
