#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random password for a given program
 *
 *
 * Returns: Returns integer (Success).
 */
int main(void)
{
	int pass[100];
	int count, x, y;

	count = 0;
	srand(time(NULL));

	for (x = 0; x < 100; x++)
	{
		pass[x] = rand() % 78;
		count += (pass[x] + '0');
		putchar(pass[x] + '0');
		if ((2772 - count) - '0' < 78)
		{
			y = 2772 - count - '0';
			count += y;
			putchar(y + '0');
			break;
		}
	}
	return (0);
}
