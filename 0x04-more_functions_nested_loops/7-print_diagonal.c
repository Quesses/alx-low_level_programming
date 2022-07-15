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
	int x = 1, y;

	while (x <= n && n > 0)
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
	if (n <= 0)
	{
		putchar('\n');
	}
}
