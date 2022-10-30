#include "main.h"
/**
 * print_rev - print string in reverse
 * @s: pointer
 * Return: no return
 */
void print_rev(char *s)
{
	int g, numb;
	int tmp = 0;

	for (numb = 0; s[numb] != '\0'; numb++);
	for (g = 0; g < numb / 2; g++)
	{
		tmp = strg[g];
		strg[g] = strg[numb - 1 - g];
		strg[numb - 1 - g] = tmp;
	}
	for (g = 0; g < numb; g++)
		_putchar(strg[g]);
	_putchar("\n");
}
