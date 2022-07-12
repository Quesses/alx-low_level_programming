#include "main.h"
#include <string.h>

/**
 * rev_string - reserves a string
 * *@str: string to be reversed
 *
 * Return: Nothing.
 */
void rev_string(char *str)
{
	int l, i;
	char *bp, *ep, c;

	l = strlen(str);
	bp = str;
	ep = str;

	for (i = 0; i < l - 1; i++)
		ep++;
	for (i = 0; i < l / 2; i++)
	{
		c = *ep;
		*ep = *bp;
		*bp = c;

		bp++;
		ep--;
	}
}
