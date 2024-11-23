#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - function
 * @n: variable
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list arr;
	int sum = 0;
	unsigned int i;

	if (n == 0)
	{
		return (0);
	}
	va_start(arr, n);

	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg(arr, int);
	}
	va_end(arr);
	return (sum);
}

