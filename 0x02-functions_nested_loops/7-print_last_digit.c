#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - prints the last digit of a given number,
 * @x: the inputed digit
 *
 * Return: the value of the last digit,
 */
int print_last_digit(int x)
{
	int xy;

	if (x < 0)
	{
		xy = -1 * (x % 10);
		_putchar(xy + '0');
		return (xy);
	}
	else
	{
		xy = x % 10;
		_putchar(xy + '0');
		return (xy);
	}
}
