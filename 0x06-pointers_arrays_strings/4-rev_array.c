#include "main.h"

/**
 * reverse_array - reverses the content of a given array on int
 * *@a: pointer to the int array
 * @n: number of elements of the array
 *
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
	int x, y, z;

	for (x = 0, y = (n - 1); x < y; x++, y--)
	{
		z = a[x];
		a[x] = a[y];
		a[y] = z;
	}
}
