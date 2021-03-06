#include <stdio.h>
#include "main.h"

/**
 * print_sign - prints the sign of a number,
 * positive or negative (greater or less than ),
 * @n: the inputed digit to be checked.
 *
 * Return: 1 if greater than zero, 0 if zero and -1 if less than than zero.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
