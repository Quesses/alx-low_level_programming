#include <stdio.h>
#include "main.h"

/**
 * main - prints the alphabets in lowercase, then a new line
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return;
}
