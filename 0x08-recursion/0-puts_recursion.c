#include <stdio.h>
#include "main.h"
/**
 * _puts_recursion - function that prints a string
 * @s: string pointer
 * Return: no return
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
		_putchar('\n');
	printf("%c", *s);
	_puts_recursion(s + 1);
}
