#include "main.h"
#include <ctype.h>

/**
 * *cap_string - capitalizes the first letter of each word in a string
 * @s: string to be capitalized
 *
 * Return: capitalized string.
 */
char *cap_string(char *s)
{
	int x = 0;

	while (s[x - 1] == ' ' || s[x - 1] == ',' || s[x - 1] == '.' || s[x - 1] == ';' || s[x - 1] == '!' || s[x - 1] == '?' || s[x - 1] == '"' || s[x - 1] == '(' || s[x - 1] == ')' || s[x - 1] == '{' || s[x - 1] == '}' || s[x - 1] == '\t' || s[x - 1] == '\n')
	{
		s[x] = toupper(s[x]);
		x++;
	}
	return (s);
}
