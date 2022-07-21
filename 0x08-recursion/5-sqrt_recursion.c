#include "main.h"

/**
 * _sqrt_recursive - returns a natural square root of a given number
 * @n: given integer number
 *
 * Return: square root or -1 if @n doesnot have a natural square root.
 */
int _sqrt_recursive(int n)
{
	if (n == 0)
		return (0);
	return (sq_rt(1, n));
}
/**
 * sq_rt - checks for the square root
 * @a: integer one
 * @b: integer two
 *
 * Return: integer
 */
int sq_rt(int a, int b)
{
	if (a * a > b)
		return (-1);
	else if (a * a == b)
		return (a);
	else if (a * a < b)
		return (sq_rt(a + 1, b));
}
