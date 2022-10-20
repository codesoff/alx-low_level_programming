#include <main.h>
/**
 * main - Entry point
 * prints alphabet,in lowercase
 * Return: 0
 */
void print_alphabet(void);
{
char ch;
for (ch = 'a'; ch = 'z'; ch++)
	putchar(ch);
putchar('\n');
return (0);
}
