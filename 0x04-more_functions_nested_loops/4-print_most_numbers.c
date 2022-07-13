#include <stdio.h>
#include "main.h"

/**
 * print_most_numbers - print numbers 0 to 9, ommitting 2 and 4
 *
 * Return: void
 */

void print_most_numbers(void)
{
	char a = 48;

	while (a <= 57)
	{
		if (a != 50 && a != 52)
		{
			putchar(a);
		}
		a++;
	}
	putchar('\n');
}
