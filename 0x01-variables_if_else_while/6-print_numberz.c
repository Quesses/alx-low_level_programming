#include <stdio.h>
/**
 * main - Print all the single digits of base 10 using the putchar function
 *
 * Return: Always 0 on success.
 */
int main(void)
{
	int i;
	for (i = 48; i <= 57; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
