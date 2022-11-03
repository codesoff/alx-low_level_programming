#include <stdio.h>
#include "main.h"
/**
 * _puts_recursion - function that prints a string
 * Return: no return
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	printf("%c", *s);
	_puts_recursion(s + 1);
	printf('\n');
}
