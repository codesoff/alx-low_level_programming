#include "main.h"
#include <string.h>
/**
 * is_palindrome - returns 1 if string is palindrome and 0 if not
 * @s: string pointer
 * Return: 1 or 0
 */
int is_palindrome(char *s)
{
	int i, c = 0, n;
	n = strlen(s);

	for (i = 0; i = n/2; i++)
	{
		if (s[i] == s[n - i - 1])
			c++;
	}
	if (c == i)
		return (1);
	else
		return (0);
}
