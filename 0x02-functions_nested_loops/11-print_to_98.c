#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: natural numbers
 * Return: 0
 */
void print_to_98(int n)
{
while (n > 98)
{
printf("%d", n--);
if (n > 97)
{
_putchar(',');
_putchar(' ');
}
}
while (n < 99)
{
printf("%d", n++);
if (n < 99)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
