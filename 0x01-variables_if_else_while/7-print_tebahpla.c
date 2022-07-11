#include <stdio.h>
/**
 * main - Prints the lowercase alphabets in reverse
 *
 * Return: Always 0 on success.
 */
int main(void)
{
	char alph;

	for (alph = 122; alph >= 97; alph--)
	{
		putchar(alph);
	}
	putchar("\n");
	return (0);
}
