#include <stdio.h>
/**
 * main - Entry point
 * prints all possible combinations of a single-digit numbers
 * Return: 0
 */
int main(void)
{
int i = 0;
for (i = 0; i <= 9; i++)
	putchar(i);
if (i < 9)
	putchar(',');
putchar('\n');
return (0);
}
