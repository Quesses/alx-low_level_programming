#include "main.h"

/**
 * main - prints diagonal lines
 * lines are made of backlashes
 *
 * Return: Always 0 (Success)
 */

int main()
{
	int a, b;

	for (b = 1; b <= n; b++)
	{
		int a = 1;
		do
		{
			_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
		while (a < b);
		a++;
	}
	if (n < 1)
		_putchar('\n');
	return (0);

