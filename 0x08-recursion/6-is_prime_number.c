#include "main.h"
/**
 * is_prime_number - return 1 integer is prime otherwise 0
 * @n: input integer number
 * Return: 0
 */
int is_prime_number(int n)
{
	int i = 2, temp = 0;

	if (n > 0)
	{
		is_prime_number(i <= n / 2);
		{
			if (n % i == 0)
			{
				temp++;
			}
			i++;
		}
		if (temp == 0 && n != 1)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
	return (0);
}
