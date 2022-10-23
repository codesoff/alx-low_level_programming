#include "main.h"
/**
 * print_numbers - prints numbers 0 - 9
 * @i: integer number
 * Return: 0
 */
void print_numbers(int i)
{
	for (i = 0; i <= 9; i++)
		_putchar("%d", i);
	_putchar('\n');
}
