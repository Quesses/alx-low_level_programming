#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <stdbool.h>

void print_string(char *);

/**
 * print_all - prints anything
 * @format: is a list of types of arguments passed
 *
 * Return: Nothing.
 */
void print_all(const char * const format, ...)
{
	unsigned int i = 0, hasprint = 0;
	va_list arg;

	va_start(arg, format);
	while (format && format[i])
	{
		switch (format[i])
		{
			case 'i':
				printf("%d", (int)va_arg(arg, int));
				hasprint = 1;
				break;
			case 'c':
				printf("%c", (char)va_arg(arg, int));
				hasprint = 1;
				break;
			case 'f':
				printf("%f", (float)va_arg(arg, double));
				hasprint = 1;
				break;
			case 's':
				print_string((char *)va_arg(arg, char *));
				hasprint = 1;
				break;
			default:
				hasprint = 0;
				break;
		}
		i++;
		if (format[i] && hasprint)
			printf(", ");
	}
	printf("\n");
	va_end(arg);
}

/**
 * print_string - prints a string
 * @s: pointer to a string
 */
void print_string(char *s)
{
	if (s)
	{
		printf("%s", s);
		return;
	}
	printf("(nil)");
}
