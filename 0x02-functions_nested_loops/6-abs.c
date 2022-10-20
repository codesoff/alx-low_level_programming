#include "main.h"
/**
 * _abs - absolute value
 * @n: absolute value of integer
 * Return: 0
 */
int _abs(int n)
{
if (n < 0)
        return ((-1) * n);
else if (n > 0)
        return (n);
else
        return (0);
}
