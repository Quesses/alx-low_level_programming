#include "main.h"
#include <string.h>

/**
 * _memset - fills in memory with a specific byte
 * @s: pointer to the memory area
 * @b: the constant to be filled in the memory area
 * @n: the given number of bytes to be filled with @b
 *
 * Return: pointer to the memory area.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int y;
	int x = 0;

	while (*(s + x) != '\0')
	{
		x++;
	}
	for (y = 0; y < n; y++)
	{
		s[y] = b;
	}
	return (s);
}
