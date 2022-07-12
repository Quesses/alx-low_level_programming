#include "main.h"
#include <string.h>

/**
 * print_rev - prints a string in reverse, then a new line
 * *@s: pointer to the string to be printed
 *
 * Return: nothing.
 */
void print_rev(char *s)
{
	int a = 0;

	while (s[a])
		a++;
	while (a--)
	{
		putchar(s[a]);
	}
	putchar('\n');
}
