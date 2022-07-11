#include <stdio.h>
#include "main.h"

/**
 * _isalpha - checkes for alphabetic characters regardless of its case
 * @c: alphabetic character to be inputed.
 *
 * Return:11 if its a letter, otherwise returns 0
 */
int _isalpha(int c)
{
	if ((c > 64 && c < 91) || (c > 96 && c < 123))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
