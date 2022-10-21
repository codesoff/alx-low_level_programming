#include "main.h"
/**
 * print_last_digit - print number
 * @l: print the last digit of a number
 * Return: 0
 */
int print_last_digit(int l)
{
int last = l % 10;
if (last < 0)
	last *= -1;
_putchar(last '0');
return (last);
}
