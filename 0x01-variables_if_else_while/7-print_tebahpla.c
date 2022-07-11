#include <stdio.h>
/**
 * main - Prints the lowercase alphabets in reverse
 *
 * Return: Always 0 on success.
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'z'; alphabet >= 'a'; alphabet--)
	{
		putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
