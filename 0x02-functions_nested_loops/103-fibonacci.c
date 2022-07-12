#include <stdio.h>
#include "main.h"

/**
 * main - finds and prints the sum of even fibonacci numbers then a new line
 *fibonaci value must not exceed 4000000

 * Return: Always 0 (Success).
 */
int main(void)
{
	int x = 1, y = 2, result = 0;
	int z;

	while (y < 4000000)
	{
		if (y % 2 == 0)
		{
			result += y;
		}
		z = y;
		y += x;
		x = z;
	}
	printf("%d\n", result);
	return (0);
}
