#include "main.h"
/**
 * more_numbers - that prints 10 times
 * Return: 0
 */
void more_numbers(void)
{
	char i, j;
	for (j = '0'; j <= '10'; j++)
	{
		for (i = '0'; i <= '14'; i++)
		{
			_putchar(i);
			_putchar('\n');
		}
		_putchar('\n');
	}
}
