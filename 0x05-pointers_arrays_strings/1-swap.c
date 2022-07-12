#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @x: the first integer to be swapped
 * @y: the second integer to be swapped.
 *
 * Return: nothing.
 */
void swap_int(int *x, int *y)
{
	int z;

	z = *y;
	*y = *x;
	*x = z;
}
