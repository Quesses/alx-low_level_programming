#include <string.h>
#include "main.h"

/**
 * *_strncpy - copies a string
 * *@dest: pointer to the destination string
 * *@src: pointer to the source string
 * @n: number of bits to be copied.
 *
 * Return: resturns the copies string.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int x;

	for (x = 0; x < n && src[x] != '\0'; x++)
	{
		dest[x] = src[x];
	}
	for ( ; x < n; x++)
	{
		dest[x] = '\0';
	}
	return (dest);
}
