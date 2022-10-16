#include <stdio.h>
/**
 * main - Entry point
 * prints all the numbers of base 16 in lower case
 * Return: 0
 */
int main(void)
{
int i = '0';
char ch;
for (i = '0'; i <= '9'; i++)
	putchar(i);
for (ch = 'a'; ch <= 'f'; ch++)
	putchar(ch);
putchar('\n');
return (0);
}
