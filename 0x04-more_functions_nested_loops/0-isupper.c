#include "main.h"
#include <stdio.h>

/**
 * main - determines if a character is uppercase or not
 *
 * Return: 0 on failure
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
