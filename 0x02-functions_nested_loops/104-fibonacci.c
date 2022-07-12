#include <stdio.h>
#define HIGHEST 10000000000
/**
 * main - finds and prints the first 98 fibonacci numbers,
 * starting from 1 and 2 follwed by a new line.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
	unsigned long int x1 = 0, x2 = 0, y1 = 1, y2 = 2;
	unsigned long int z1, z2, z3;
	int cnt;

	printf("%lu, %lu, ", y1, y2);
	for (cnt = 2; cnt < 98; cnt++)
	{
		if (y1 + y2 > HIGHEST || x2 > 0 || x1 > 0)
		{
			z1 = (y1 + y2) / HIGHEST;
			z2 = (y1 + y2) % HIGHEST;
			z3 = x1 + x2 + z1;
			x1 = x2, x2 = z3;
			y1 = y2, y2 = z2;
			printf("%lu%010lu", x2, y2);
		}
		else
		{
			z2 = y1 + y2;
			y1 = y2, y2 = z2;
			printf("%lu", y2);
		}
		if (cnt != 97)
			printf(", ");
	}
	printf("\n");
	return (0);
}
