#include <stdio.h>

/**
 * main - prints numbers 1 to 100
 * replaces all multiples of 3 with Fizz
 * replaces all multiples of 5 with Buzz
 * all multiples of 3 & 5 with FizzBuzz
 * Return: Always 0
 */

int main ()
{
	int i;

	for (i = 1; 1 <= 100; i++)
	{
		if ( i % 3 == 0)
			printf("Fizz\n");
	}
	return (0);
}
