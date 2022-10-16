#include <stdio.h>
/**
 * main - Entry point
 * prints all possible combinations of a single-digit numbers
 * Return: 0
 */
int main(void)
{
int i = 0;
while (i <= 9)
{
	putchar(i + '0');
if (i < 9){
	putchar(',');
putchar(' ');
}
i++;
}
putchar('\n');
return (0);
}
