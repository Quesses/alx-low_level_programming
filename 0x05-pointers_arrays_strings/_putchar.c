#include <unistd.h>
/**
 * _putchar - prints rthe character c to standard output
 * c: the character to be priinted
 *
 * Return: 1 on Success, while -1 on error (errno is set appropriately).
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
