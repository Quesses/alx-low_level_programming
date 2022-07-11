#include <stdio.h>
/**
 * main - print the combination of 3 digits
 *
 * Return: Always o (Success)
 */
int main(void)
{
	int x, y, z;

	for (x = 48; x <= 55; x++)
	{
		for (y = 49; y <= 56; y++)
			for (z = 50; z <= 57; z++)
			{
				if (x < y && y < z)
				{
					putchar(x);
					putchar(y);
					putchar(z);
					if (x != 55 || y != 56 || z != 57)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
	}
	putchar('\n');
	return (0);
}
