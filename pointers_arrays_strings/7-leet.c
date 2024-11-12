#include "main.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char str[] = "hello world";
    char *encoded;

    encoded = leet(str);
    printf("Encoded string: %s\n", encoded);

    return 0;
}
