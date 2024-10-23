#include "main.h"

/**
 * print_alphabet - prints the alphabet
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char kamal = 'a';

	while (kamal <= 'z')
	{
		_putchar(kamal);
		kamal++;
	}
	_putchar('\n');
}
