#include "main.h"
#include <stdio.h>

/**
 * _isupper - determines if a character is uppercase or not
 * @c: inputed character to be checked
 *
 * Return: non zero char on succeess and 0 on failure.
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
