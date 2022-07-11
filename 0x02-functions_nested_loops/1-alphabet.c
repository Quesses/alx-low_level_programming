#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - prints the alphabets in lowercase, then a new line
 *
 * Return: void
 */
void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
}
