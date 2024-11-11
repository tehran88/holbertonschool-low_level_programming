#include "main.h"
#include <string.h>

/* `strcpy` funksiyasının təyini (əgər lazım olsa) */
char *_strcpy(char *dest, const char *src)
{
    while (*src)
    {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';  /* null-terminator əlavə edirik */
    return dest;
}
