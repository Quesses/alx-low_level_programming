#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - prints a name
 * @name : pointer to a given string
 * @f: function pointer
 *
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
