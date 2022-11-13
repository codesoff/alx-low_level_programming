#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: pointer of string
 * Return: pointer to the duplicated string or NULL
 */
char *_strdup(char *str)
{
	char *a;
	int i, c;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		;
	a = malloc(i * sizeof(*a));
	if (a == NULL)
		return (NULL);
	for (c = 0; c < i; c++)
		a[c] = str[c];
	a[c] = '\0';
	return (a);
}
