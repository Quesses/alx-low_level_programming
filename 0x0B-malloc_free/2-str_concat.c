#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: destination string
 * @s2: source string
 *
 * Return: NULL on failure, pointer to the concatenated string.
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	int len1 = 0;
	int len2 = 0;
	int x, y;

	if (s1 != NULL)
	{
		while (s1[len1] != '\0')
			len1++;
	}
	if (s2 != NULL)
	{
		while (s2[len2] != '\0')
			len2++;
	}
	concat = (char *) malloc((sizeof(char) * (len1 + len2)) + 1);
	if (concat == NULL)
		return (NULL);
	for (x = 0; x < len1; x++)
		concat[x] = s1[x];
	for (y = 0; y < len2; y++, x++)
		concat[x] =  s2[y];
	concat[len1 + len2] = '\0';
	return (concat);
}
