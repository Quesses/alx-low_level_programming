#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int _putchar(char c);

int main(void)
{
	char putchar[9] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(putchar[4]);
	}
	_putchar('\n');
	return (0);
}
