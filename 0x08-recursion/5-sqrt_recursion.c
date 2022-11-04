#include "main.h"
int _sqrt(int n, int i);
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: integer number
 * Return: 0
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
/**
 * _sqrt - returns square root of the number
 * @n: return the number
 * @i: iterate the number
 * Return: root
 */
int _sqrt(int n, int i)
{
	int square = i * i;
	if (square > n)
	return (-1);
	if (square == n)
	return (i);
	return (_sqrt(n, i + 1));
			}
