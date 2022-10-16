#include <stdio.h>
/**
 * main - Entry point
 * prints all possible different combinations of three digits
 * Return: 0
 */
int main(void)
{
int i, a, b, c;
for (i = 0; i <= 800; i++)
{
a = i / 100;
b = (i / 10) % 10;
c = i % 10;
if (a < b && b < c)
{
putchar(a + '0');
putchar(b + '0');
putchar(c + '0');
if (i < 789)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
