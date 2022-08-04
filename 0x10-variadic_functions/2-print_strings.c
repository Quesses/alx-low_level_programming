#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>

/**
 * print_strings - prints strings and then a new line
 * @n: number of arguments passed
 * @separator: string to printed between strings
 *
 * Return: Nothing.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	unsigned int i = 1;

	va_start(arg, n);

	for (; i <= n; i++)
	{
		if (separator == NULL)
			printf("(nil)");
		else
			printf("%s", va_arg(arg, char*));
		if (i != n && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(arg);
}
