#include "main.h"

/**
 * print_numbers -  print the numbers 0 to 9, then a new line
 *
 * Return: Nothing.
 */

void print_numbers(void)
{
	char a;

	for (a = 48; a <= 57; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}

