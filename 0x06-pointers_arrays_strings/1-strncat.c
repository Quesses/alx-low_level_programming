#include <string.h>
#include "main.h"

/**
 * *_strncat - concatenates two strings
 * *@dest: first string (destination)
 * *@src: second string (source string)
 * @n: number of bits to be copied from source string
 *
 * Return: concatenated string.
 */
char *_strncat(char *dest, char *src, int n)
{
	int len = strlen(dest);
	int x;

	for (x = 0; x < n && src[x] != '\0'; x++)
	{
		dest[len + x] = src[x];
	}
	dest[len + x] = '\0';
	return (dest);
}
