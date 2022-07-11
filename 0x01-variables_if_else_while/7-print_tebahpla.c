#include <stdio.h>
/**
 * main - Prints the lowercase alphabets in reverse
 *
 * Return: Always 0 on success.
 */
int main(void)
{
	char alphabet;

	for (alphabet = 122; alphabet >= 97; alphabet--)
	{
		putchar(alphabet);
	}
	putchar("\n");
	return (0);
}
