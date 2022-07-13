#include <stdio.h>
#include "main.h"

/**
 * _isdigit - determines if a character is a digit
 * @c: inputed character to be determined
 *
 * Return: 0 on failure, 1 on success.
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
		return (0);
}
