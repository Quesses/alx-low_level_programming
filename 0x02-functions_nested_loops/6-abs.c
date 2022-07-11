#include <stdio.h>
#include "main.h"

/**
 * _abs - computes the absolute value of a given integer,
 * @x: integer to be inputed.
 *
 * Return: returns the absolute value of x
 */
int _abs(int x)
{
	if (x < 0)
	{
		return (x * -1);
	}
	else
	{
		return (x);
	}
}
