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
	va_list ptr;
	unsigned int i;
	char *s;

	va_start(ptr, n);

	for (i = 0 ; i < n ; i++)
	{
		s = va_arg(ptr, char *);
		s == NULL ? printf("(nil)") : printf("%s", s);
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}

	printf("\n");
	va_end(ptr);
}

