#include "main.h"
#include <string.h>

/**
 * _memcpy - copies a specific number of bytes from one memory area to another
 * @dest: pointer to the destination memory area
 * @src: pointer to the source memory area
 * @n: given number of bytes to be copied
 *
 * Return: pointer to the destination pointer.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int x = 0, y;
	unsigned int z;

	while (*(dest + x) != '\0')
	{
		y = 0;

		while (*(src + y) != '\0')
			y++;
		x++;
	}
	for (z = 0; z < n; z++)
	{
		dest[z] = src[z];
	}
	return (dest);
}
