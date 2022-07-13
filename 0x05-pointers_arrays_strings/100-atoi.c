#include "main.h"
#include <stdlib.h>

/**
 * _atoi - converts a string to an int.
 * *@s: pointer to the string
 *
 * Return: Always 0.
 */
int _atoi(char *s)
{
	int x, y, z, l, m, n;

	x = 0;
	y = 0;
	z = 0;
	l = 0;
	m = 0;
	n = 0;
	while (s[l] != '\0')
		l++;
	while (x < l && m == 0)
	{
		if (s[x] == '-')
			++y;
		if (s[x] >= '0' && s[x] <= '9')
		{
			n = s[x] - '0';
			if (y % 2)
				n = -n;
			z = z * 10 + n;
			m = 1;
			if (s[x + 1] < '0' || s[x + 1] > '9')
				break;
			m = 0;
		}
		x++;
	}
	if (m == 0)
		return (0);
	return (z);
}
