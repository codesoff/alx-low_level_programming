#include "main.h"
/**
 * _strcat - function that concatenates two strings
 * @dest: string
 * @src: string
 * Return: 0
 */
char *_strcat(char *dest, char *src)
{
	int a, b;
	for (a = 0; dest[a] != '\0'; a++)

		for (b = 0; src[b] != '\0'; c++)
		{
			dest[a] = src[b];
			a++;
		}
	dest[a] = '\0';
	return (dest);
}
