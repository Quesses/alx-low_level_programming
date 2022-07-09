#include <stdio.h>
#include "main.h"

/**
 * main - prints numbers 1 to 100
 * replaces all multiples of 3 with Fizz
 * replaces all multiples of 5 with Buzz
 * all multiples of 3 & 5 with FizzBuzz
 * Return: Always 0
 */

int main (void)
{
	int i;

	for (int i = 1; 1 <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else if (i % 3 ==0)
		{
			printf("Fizz");
		}
		else
		{
			printf("%d", i);
		}
		printf("\n");
	}
	return (0);
}
