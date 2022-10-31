#include "main.h"

/**
 * puts_half - prints half of a string.
 * @str: input string.
 * Return: no return.
 */
void puts_half(char *str)
{
	int count, i;

	for (count = 0; count >= 0; count++)
	{
		if (str[count] == '\0')
			break;
	}
	i = (count - 1) / 2;
	for (i++; i < count; i++)
		_putchar(str[i]);
	_putchar('\n');
}
