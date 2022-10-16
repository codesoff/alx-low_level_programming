#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * prints lowercase alphabet except q and e
 * Return: 0
 */
int main(void)
{
char ch, a, b;
a = 'e';
b = 'q';
for (ch = 'a'; ch <= 'z'; ch++)
	if (ch != a && ch != b)
		putchar(ch);
putchar('\n');
	return (0);
}
