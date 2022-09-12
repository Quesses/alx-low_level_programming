#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: 1 , print to standard error
 */
int main(void)
{
	write(3, "and that piece of art is useful\" - Dora Korpar - 2015-10-19\n", 60);
	
	return (1);
}
