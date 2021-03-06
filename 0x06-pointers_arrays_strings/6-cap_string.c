#include "main.h"
#include <ctype.h>

/**
 * *cap_string - capitalizes the first letter of each word in a string
 * @str: string to be capitalized
 *
 * Return: capitalized string.
 */
char *cap_string(char *str)
{
	int x = 0;

	while (str[x])
	{
		while (!(str[x] >= 'a' && str[x] <= 'z'))
			x++;
		if (str[x - 1] == ' ' || str[x - 1] == ',' || str[x - 1] == '.' ||
		str[x - 1] == ';' || str[x - 1] == '!' || str[x - 1] == '?' ||
		str[x - 1] == '"' || str[x - 1] == '\t' || str[x - 1] == '(' ||
		str[x - 1] == ')' || str[x - 1] == '{' || str[x - 1] == '}' ||
		str[x - 1] == '\n' || str[x - 1] == '\v' || x == 0)
		{
			str[x] = toupper(str[x]);
		}
		x++;
	}
	return (str);
}
