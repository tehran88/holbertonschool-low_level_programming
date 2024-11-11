#include "main.h"

void more_numbers(void)
{
    int i, j;

    for (i = 0; i < 10; i++)  // 10 dəfə dövr etmək üçün
    {
        for (j = 0; j <= 14; j++)  // 0-dan 14-ə qədər çap edəcəyik
        {
            if (j > 9)  // İki rəqəmli ədəd olduğu halda, 10 və yuxarı
            {
                _putchar(j / 10 + '0');  // İlk rəqəmi çap edirik (məsələn, 1 üçün '1')
            }
            _putchar(j % 10 + '0');  // İkinci rəqəmi çap edirik (məsələn, 0 üçün '0')
        }
        _putchar('\n');  // Sətir sonu, hər 10 dövr üçün yeni sətir
    }
}

