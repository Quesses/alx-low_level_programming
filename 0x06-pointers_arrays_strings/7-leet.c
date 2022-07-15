#include "main.h"

/**
 * *leet - encodes a given string into 1337
 * Description: A,a changes to 4
 * @s: given string to be encoded
 *
 * Return: encoded string.
 */
char *leet(char *s)
{
	int a, b;
	int x[11] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int y[11] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	for (b = 0; s[b] != '\0'; b++)
	{
		for (a = 0; x[a] != '\0'; a++)
		{
			if (s[b] == x[a])
			{
				s[b] = y[a];
			}
		}
	}
	return (s);
}
