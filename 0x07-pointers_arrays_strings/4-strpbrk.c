#include <string.h>
#include "main.h"

/**
 * _strpbrk - searches a string for any set of bytes
 * @s: pointer to the string to be searched
 * @accept: pointer to the string with the matching bytes
 *
 * Return: pointer to the string with the matched bytes
 */
char *_strpbrk(char *s, char *accept)
{
	char *matched;

	matched = strpbrk(s, accept);
	return (matched);
}
