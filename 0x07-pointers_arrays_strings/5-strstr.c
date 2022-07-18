#include <string.h>
#include "main.h"

/**
 * _strstr - locates a given substring
 * @haystack: pointer to the string to be searched
 * @needle: pointer to the substring to be located
 *
 * Return: pointer to the lacated string or NULL if the substring ias not found
 */
char *_strstr(char *haystack, char *needle)
{
	char *result;

	result = strstr(haystack, needle);
	return (result);
}
