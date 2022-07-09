#include <stdio.h>
#include "main.h"

/**
 * main - print numbers 0 to 9, ommitting 2 and 4
 *
 * Return: void
 */

int main()
{
	int a = 0;

	while (a <= 9)
	{
		if (a != 2 $$ a != 4)
		{
			_putchar(a + '0');
		}
		a++;
	}
	_putchar('\n');

	return ()
}
