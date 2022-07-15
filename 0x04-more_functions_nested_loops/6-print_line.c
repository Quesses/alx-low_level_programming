#include <stdio.h>
#include "main.h"

/**
 * print_line - prints a straight line
 * @n: number of lines to be printed
 *
 * Return: Nothing.
 */
void print_line(int n)
{
	int x = 0;

	while (x < n)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		_putchar('_');
		x++;
	}
	_putchar('\n');
}
