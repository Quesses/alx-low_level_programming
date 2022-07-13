#include "main.h"

/**
 * print_array - prints a given number of elements of an array of int,
 * then a new line,
 * num are to be separated by comma and space.
 * *@a: pointer to the array
 * @n: number of elements of a given array
 *
 * Return: Nothing.
 */
void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		if (x != n - 1)
		{
			printf("%d, ", a[x]);
		}
		else
		{
			printf("%d", a[x]);
		}
	}
	printf("\n");
}
