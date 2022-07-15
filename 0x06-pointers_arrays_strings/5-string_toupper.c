#include "main.h"
#include <ctype.h>

/**
 * *string_toupper - changes all lowercase letters of a string to upperase
 * *@s: source string to be changed
 *
 * Return: string in uppercase
 */
char *string_toupper(char *s)
{
	int x;

	for (x = 0; s[x]; x++)
	{
		s[x] = toupper(s[x]);
	}
	return (s);
}
