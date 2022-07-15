#include <string.h>
#include "main.h"

/**
 * *_strcat - concatenates two strings
 * *@dest: pointer to the first string (head string)
 * *@src: pointer to the second string (tail)
 *
 * Return: pointer to the concatenated string.
 */
char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}
