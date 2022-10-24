#include "main.h"
/**
 * Print_triangle - print triangle
 * @size: size of the triangle
 * Return: 0
 */
void print_triangle(int size)
{
	int i, j, size;
	if (size <= 0)
		_putchar('\n');
	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= size; j++)
		{
			if (j <= (size - i))
				_putchar(' ');
			else
				_putchar('#');
		}
		_putchar('\n');
	}
}
