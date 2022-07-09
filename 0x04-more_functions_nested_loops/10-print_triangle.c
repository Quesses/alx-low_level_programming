#include <stdio.h>
#include "main.h"

/**
 * main - prints a triangle
 *size is inputed, if <= 0, print only a new line

 * Return: 0 
 */

int main()
{
	int i, j;

	for (i = 1; i <= size; i++)
	{
		for (j = size - 1; j > 0; j--)
		{
			_putchar(' ');
		}
		for (j = i; j > 0; j--)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (size < 1)
		_putchar('\n');
	return (0);
}
