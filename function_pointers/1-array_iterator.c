#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - function
 * @array: pointer
 * @action: function
 * @size: variable
 * Retrun: array's element
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i;

	for (i = 0; i < size; i++)
	{
		action(*(array + i));
	}
}
