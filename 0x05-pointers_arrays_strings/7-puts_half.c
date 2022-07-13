#include "main.h"
#include <string.h>

/**
 * puts_half - prints only half of a given string
 * for a string with odd num of char lst = num of char - 1 / 2.
 * *@str: pointer to the given string
 *
 * Return: Nothing.
 */
void puts_half(char *str)
{
	int l = 0;

	while (*(str + l) != '\0')
	{
		l++;
	}
	l = l / 2;
	while (*(str + l) != '\0')
	{
		str++;
	}
	printf("%s", str);
	printf("\n");
}
