#include <stdio.h>
#include "main.h"

/**
 * main - prints the first fifty fibonacci numbers then by a new line,
 * nembers are separated by a comma and space.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
	long int x = 1, y = 2;
	long int z;
	int count = 2;

	printf("%lu, ", x);
	while (count <= 50)
	{
		if (count == 50)
		{
			printf("%lu\n", y);
		}
		else
		{
			printf("%lu, ", y);
		}
		z = y;
		y += x;
		x = z;
		count++;
	}
	return (0);
}
