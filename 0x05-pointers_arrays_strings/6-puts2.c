#include "main.h"
#include <string.h>
/**
 * puts2 - prints every other character of a given string,
 * starting from the first character, tthen a new line.
 * *@str: pointer to the given string
 *
 * Return: Nothing.
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			printf("%c", str[i]);
		}
		i++;
	}
	putchar('\n');
}
