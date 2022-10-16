#include <stdio.h>
/**
 * main - Entry point
 * print all possible different combinations of two digits
 * Return: 0
 */
int main(void)
{
int i, a, b;
i = 0;
while (i < 90)
{
a = i % 10;
b = i / 10;
if (b < a) {
putchar(b + '0');
putchar(a + '0');
if (i < 89) {
putchar(',');
putchar(' ');
}
}
i++;
}
putchar('\n');
return (0);
}
