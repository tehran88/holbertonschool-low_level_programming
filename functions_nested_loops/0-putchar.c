#include <stdio.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * Return: On success 1, on error -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
    return putchar(c);
}

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
    char a[] = "_putchar\n";
    int b = 0;

    while (a[b] != '\0')
    {
        _putchar(a[b]);
        b++;
    }
    return (0);
}

