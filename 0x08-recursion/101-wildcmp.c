#include "main.h"

/**
 * wildcmp - compares two strings checking if they are identical
 * @s1: string one
 * @s2: string two
 *
 * Return: 1 if identical, 0 otherwise.
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}
	else if (*s1 == '\0' && *s2 == '*')
	{
		return (wildcmp(s1, (s2 + 1)));
	}
	else if (*s1 == '\0' || *s2 == '\0')
	{
		return (0);
	}
	if (*s1 == *s2)
	{
		return (wildcmp((s1 + 1), (s2 + 1)));
	}
	if (*s2 == '*')
	{
		if (*(s2 + 1) == '*')
			return (wildcmp(s1, (s2 + 1)));
		else if (wildcmp(s1, s2 + 1))
			return (1);
		else
			return (wildcmp(s1 + 1, s2));
	}
	return (0);
}
