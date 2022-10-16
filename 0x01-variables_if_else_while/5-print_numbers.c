#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * print all single digit numbers of base 10
 * Return: 0
 */
int main(void)
{
int i;
for (i = 0; i <= 9; i++)
	printf("%d", i);
putchar('\n');
return (0);
}
