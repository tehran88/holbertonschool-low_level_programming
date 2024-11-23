#include "function_pointers.h"
#include <stddef.h>

/**
 * int_index - function
 * @array: pointer
 * @cmp: function
 * @size: variable
 * Return: 0 or 1 or -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		cmp(*(array + i));
		if (cmp(array[i]) == 1)
		{
			return (i);
		}
	}
	return (-1);
}
