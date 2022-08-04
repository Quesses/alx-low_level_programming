#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>

/**
 * print_numbers - prints numbers and then a new line
 * @n: number of arguments to passed
 * @separator: string to printed between numbers
 *
 * Return: Nothing.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	unsigned int i = 1;

	va_start(arg, n);

	for (; i <= n; i++)
	{
		printf("%d", va_arg(arg, int));
		if (i != n && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(arg);
}
