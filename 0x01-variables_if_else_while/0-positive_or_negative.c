#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Determines and prints if the randome number is positive or negative
 *
 * return: always 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* this code selects a random each timeit runs */
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else
	{
		printf("%d is zero\n", n);
	}
	return (0);
}
