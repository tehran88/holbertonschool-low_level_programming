#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>
/**
 * print_numbers - function
 * @n: variable
 * @separator: pointer
 * Return: prints number with separator
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arr;
	unsigned int i;

	va_start(arr, n);

	for (i = 0; i < n; i++)
	{
		if (((n - i) == 1) || separator == NULL)
		{
			printf("%d", va_arg(arr, int));
			continue;
		}
		printf("%d%s", va_arg(arr, int), separator);
	}
	printf("\n");
	va_end(arr);
}

