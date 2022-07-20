#include "main.h"
#include <math.h>

/**
 * _pow_recursion - returns the value of @x raised to the power of @y
 * @x: integer value one(main)
 * @y: secomd integer value
 *
 * Return: if @y is less than 0 returns -1 else return result
 */
int _pow_recursion(int x, int y)
{
	int result = 1;

	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else if (y > 0)
		result = x * _pow_recursion(x, y - 1);
	return (result);
}
