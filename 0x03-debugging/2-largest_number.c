#include "main.h"

/**
 * largest_number - determines the largest of 3 given numbers
 * @x: first int
 * @y: second int
 * @z: third int
 *
 * Return: largest value.
 */

int largest_number(int x, int y, int z)
{
	int largest = y;

	if (x > y)
	{
		largest = x;
	}
	else if (z > y)
	{
		largest = z;
	}

	return (largest);
}
