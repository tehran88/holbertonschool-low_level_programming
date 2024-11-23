#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>
/**
 * print_strings - function
 * @n: variable
 * @separator: pointer
 * Return: prints strings with separator
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arr;
	unsigned int i;
	char *temp;

	va_start(arr, n);

	for (i = 0; i < n; i++)
	{
		temp = va_arg(arr, char*);
		if ((n - i) == 1 || separator == NULL)
		{
			if (temp == NULL)
			{
				printf("(nil)");
			}
			printf("%s", temp);
			continue;
		}
		printf("%s%s", temp, separator);
	}
	printf("\n");
	va_end(arr);
}

