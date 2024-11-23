#include "function_pointers.h"

/**
 * print_name - function
 * @name: pointer
 * @f: function
 * Retrun: name
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
