#include "function_pointers.h"
/**
 * int_index - Search for an integer
 * @array:given array of int
 * @size: number of elements in the array
 * @cmp: pointer function 
 *
 * Return: index of the first integer element found
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, x;

	if (size <= 0)
	{
		return (-1);
	}
	if (size && cmp != NULL && array != NULL)
	{
		for (i = 0; i < size; i++)
		{
			x = cmp(array[i]);
			if (x != 0)
				return (i);
		}
	}
	return (-1);
}
