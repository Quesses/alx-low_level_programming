#include <string.h>
#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @a: pointer to the 2D character array
 *
 * Return: Nothing.
 */
void print_chessboard(char (*a)[8])
{
	int x, y;

	for (x = 0; a[x][7]; x++)
	{
		for (y = 0; y < 8; y++)
			putchar(a[x][y]);
		putchar('\n');
	}
}
