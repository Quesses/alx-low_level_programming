#include <stdio.h>
#include "main.h"

/**
 * more_numbers - this prints 0 to 14, 10 times
 *
 * Return: Nothing.
 */

void more_numbers(void)
{
	int a, b;
	int i = 0;

	while (i < 10)
	{
		for (a = 0; a <= 14; a++)
		{
			b = a;
			if (a > 9)
			{
				putchar('1');
				b = a % 10;
			}
			putchar('0' + b);
		}
		putchar('\n');
		i++;
	}
}
