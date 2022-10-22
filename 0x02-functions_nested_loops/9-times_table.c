#include "main.h"
/**
 * times_table - prints 9 times
 * prints 9 times table
 * Return: no return
 */
void times_table(void)
{
int a, b, c;
for (a = 0; a <= 9; a++)
{
	_putchar('0');
	for (b=1; b <= 9; b++)
{
ic = a * b;
if (c <= 9)
{
_putchar(' ');
_putchar(c + '0');
}
else if (c >= 9)
{
_putchar((c / 10) + '0');
_putchar((c % 10) + '0');
}
if (b <= 8)
_putchar(',');
_putchar(' ');
}
_putchar('\n');
}
}
