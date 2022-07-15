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
			putchar('\n');
		}
		putchar('_');
		x++;
	}
	putchar('\n');
}
