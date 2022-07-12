#include <stdio.h>
#include "main.h"
#include <math.h>

/**
 * main - prints and computes the sum of all the multiples of 3 or 5
 * below 1024.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
	int i = 1;
	int result = 0;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0)
			result += i;
			result += i;
	}
	printf("%d\n", result);
	return (0);
}
