#include <stdio.h>
#include "main.h"

/**
 * _islower - checks if a character is lowercase.
 *
 * Return: returns 1 on Success (lowercase), 0 on failure (not lowercase).
 */
int _islower(int c)
{
	if (c > 96 && c < 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
