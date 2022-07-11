#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints all natural numbers from a given number to 98,
 * numbers are separated by comma and space
 * @n: inputed given number.
 *
 * Return: void.
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		while (n >= 98)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(", ");
			}
			n--;
		}
	}
	else
	{
		while (n <= 98)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(", ");
			}
			n++;
		}
	}
	printf("\n");
}
