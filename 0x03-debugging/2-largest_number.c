#include "main.h"

/**
 * main - determines and prints the largest number of 3 given numbers
 * @x: first int
 * @y: second int
 * @z: third int
 *
 * Return: Always 0 (Success)
 */

int largest_number(int x, int y, int z)
{
	int largest = y;
	if (x >y)
	{
		largest = x;
	}
	else if (z > y)
	{
		largest = z;
	}
	return (largest);
}
