#include <stdio.h>

/**
 * main - prints the standard error sandwiched around the standard outpu/t
 *
 * Return: 1 , print to standard error
 */
int main(void)
{
	write(2, "and that piece of art is useful\" -Dora Korpar - 2015-10-19\n", 59);
	return (1);
}
