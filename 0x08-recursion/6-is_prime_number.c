#include "main.h"

int is_prime(int a, int b);

/**
 * is_prime_number - determines if a given integer is a prime number
 * @n: given integer to be determined
 *
 * Return: 1 if theb int is a prime number, 0 otherwise.
 */
int is_prime_number(int n)
{
	int i = 2;

	if (i == 1)
		return (1);
	return (is_prime(i, n));
}
/**
 * is_prime - checks if a number is prime
 * @a: integer one
 * @b: second integer
 *
 * Return: integer
 */
int is_prime(int a, int b)
{
	if (b < 2 || b % a == 0)
		return (0);
	else if (a > b / 2)
		return (1);
	return (is_prime(a + 1, b));
}
