#include "main.h"
/**
 * _isalpha - check
 * ckeck the alphabet
 * Return: 1 or 0
 */
int _isalpha(int c)
{
if (isupper(c) || islower(c))
	return (1);
return (0);
}
