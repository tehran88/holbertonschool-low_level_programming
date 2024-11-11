#include <stdio.h>
#include <string.h>

int main(void)
{
    char src[] = "Z";  /* İstədiyiniz hər hansı bir string */
    char dest[2];  /* Yalnız bir `Z` üçün yer */

    /* `strcpy` ilə kopyalayırıq */
    strcpy(dest, src);

    /* Nəticəni çap edirik */
    printf("%s\n", dest);  /* Burada yalnız "Z" çap olmalıdır */

    /* Eyni şeyi bir neçə dəfə təkrarlayırıq */
    strcpy(dest, src);
    printf("%s\n", dest);  /* Yalnız "Z" çap olmalıdır */

    strcpy(dest, src);
    printf("%s\n", dest);  /* Yalnız "Z" çap olmalıdır */

    return 0;
}

