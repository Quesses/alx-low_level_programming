#include <string.h>
#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: pointer to the main string
 * @accept: pointer to the subscript whose length is to be returned
 *
 * Return: the number of bytes in @s containing only bytes from @accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int len;

	len = strspn(s, accept);
	return (len);
}
