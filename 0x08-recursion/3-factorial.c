#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: given integer number to be printed
 *
 * Return: factorial of the given number or -1 if @n is less than 0.
 */
int factorial(int n)
{
	int fact;

	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	if (n == 1)
		return (1);
	if (n > 1)
		fact = n * factorial(n - 1);
	return (fact);
}
