#include "main.h"
#include <stdio.h>

/**
 * print_alphabet_x10 - prints the alphabets in lowercase ten times,
 * with each on a new line followed by a new line
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int i = 0;
	char ch;

	while (i < 10)
	{
		ch = 'a';
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
		i++;
	}
}
