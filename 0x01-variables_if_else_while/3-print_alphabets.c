#include <stdio.h>
/**
 * main - Prints the alphabets in lowercase followed by uppercase
 *
 * Return: Always 0 on success.
 */
int main(void)
{
	int ch;
	
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
