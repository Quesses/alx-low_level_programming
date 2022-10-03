#include <stdio.h>

/**
 * add - simple addition operation
 * @x: first integer
 * @y: second integer
 *
 * Return: sum
 */
int add(int x, int y)
{
	return (x + y);
}

/**
 * sub - simple substraction operation
 * @x: first integer
 * @y: second integer
 *
 * Return: subtrated value
 */
int sub(int x, int y)
{
	return (x - y);
}

/**
 * mul - simple multiplication operation
 * @x: first integer
 * @y: second integer
 *
 * Return: multiplied value
 */
int mul(int x, int y)
{
	return (x * y);
}

/**
 * div - simple division operation
 * @x: first integer
 * @y: second integer
 *
 * Return: divided value
 */
int div(int x, int y)
{
	return (x / y);
}

/**
 * mod - simple modulus operation
 * @x: first integer
 * @y: second integer
 *
 * Return: modulus
 */
int mod(int x, int y)
{
	return (x % y);
}

void main()
{
	printf("%d\n", mod(-81, 13));
}
