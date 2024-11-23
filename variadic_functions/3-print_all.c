#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>
/**
 * print_all - function
 * @format: pointer
 * Return: prints anything with separator
 */
void print_all(const char * const format, ...)
{
	va_list arr;
	int i = 0, j = 0;
	char *str;

	va_start(arr, format);
	if (format)
	{
		while (format[i])
		{
			j = 1;
			i++;
			switch (format[i - 1])
			{
				case 'c':
					printf("%c", va_arg(arr, int));
					break;
				case 'i':
					printf("%d", va_arg(arr, int));
					break;
				case 'f':
					printf("%f", va_arg(arr, double));
					break;
				case 's':
					str = va_arg(arr, char *);
					if (!str)
					{
						str = "(nil)";
					}
					printf("%s", str);
					break;
				default:
					continue;
			}
			while (j && format[i])
			{
				printf(", "), j = 0;
			}
		}
	}
	printf("\n"), va_end(arr);
}

