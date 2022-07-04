#include <stdio.h>

/**
 * main - Prints the alphabets in lowercase excluding the letters q and e
 *
 * Return: Always 0 on success.
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
		ch++;
	}	
	putchar('\n');
	return (0);

}
