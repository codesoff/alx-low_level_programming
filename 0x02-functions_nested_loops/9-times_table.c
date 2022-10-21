#include "main.h"
// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int a, b, c;
    for (a = 0; a <= 9; a++)
    {
        for (b = 0; b <= 9; b++)
        {
        c = a * b;
         putchar(',');
        putchar(' ');
         putchar(c + '0');
        if ( c >+ 10)
        {
            putchar((c / 10) + '0');
            putchar((c % 10) + '0');
        }
      // putchar(' ');
      if(a <= 9 && b <= 9)

    }
    putchar('\n');
    }
    return 0;
}
