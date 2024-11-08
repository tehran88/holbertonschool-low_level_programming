#include "main.h"

/**
 * print_numbers - prints the numbers from 0 to 9 followed by a new line
 */
void print_numbers(void)
{
    char i;

    for (i = '0'; i <= '9'; i++)   /* '0' simvolundan '9' simvoluna qədər dövr */
    {
        _putchar(i);  /* Çap edirik: 0, 1, 2, ..., 9 */
    }
    _putchar('\n');  /* Yeni xətt simvolu */
}

