#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main Entry point
 * prints all single digit numbers of base 10
 * Return: 0
 */
int main(void)
{
int ch = '0';
for (ch = '0'; ch <= '9'; ch++)
	putchar(ch);
putchar('\n');
return (0);
}
