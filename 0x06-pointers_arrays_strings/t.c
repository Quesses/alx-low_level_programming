#include <stdio.h>

int main()
{
	char c = 105;

	printf("%c\n", c);
	if (c >= 97 && c <= 122)
	{
		c -= 32;
	}
	putchar(c);
	putchar('\n');
	return (0);
}
