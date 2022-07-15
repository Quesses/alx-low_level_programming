#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - prints a diagonal line made of backlashe
 * @n: number of lines to be printed
 *
 * Return: Nothing.
 */
void print_diagonal(int n)
{
	int x, y;

	if (n > 0)
	{
		x = 1;
		while (x <= n)
		{
			y = 0;
			while (y < x)
			{
				putchar(' ');
				y++;
			}
			putchar('\\');
			putchar('\n');
			x++;
		}
	}
	else
	{
		putchar('\n');
	}
}
