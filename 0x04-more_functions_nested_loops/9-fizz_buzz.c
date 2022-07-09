#include <stdio.h>
#include "main.h"

/**
 * main - prints numbers 1 to 100
 * replaces all multiples of 3 with Fizz
 * replaces all multiples of 5 with Buzz
 * all multiples of 3 & 5 with FizzBuzz
 * Return: Always 0
 */

int main(void)
{
	for (int i = 1; 1 <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
			printf("FizzBuzz\n");
		else if (i % 3 == 0)
			printf("Fizz\n");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%d\n", i);	
	}

	return (0);
}
