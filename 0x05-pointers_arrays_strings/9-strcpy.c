#include "main.h"
#include <string.h>

/**
 * *_strcpy - copies the string pointed by one pointer including the '\0',
 * to a string pointed by another pointer
 * *@src: the pointer pointing to the string to be copied from
 * *@dest: pointer pointing to the string to be sopied to.
 *
 * Return: Always 0 (Success).
 */
char *_strcpy(char *dest, char *src)
{
	strcpy(dest, src);
	return (dest);
}
