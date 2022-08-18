#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - converts binary number into integer
 * @b: pointer to the string holding the binary digits
 *
 * Return: converted number on success and 0 otherwise
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i, uint = 0;

	if (!b)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		uint = uint << 1;
		uint |= (b[i] - '0');
	}
	return (uint);
}
