#include "main.h"

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
				_putchar(' ');
				y++;
			}
			_putchar('\\');
			_putchar('\n');
			x++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
