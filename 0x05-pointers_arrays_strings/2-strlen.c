#include "main.h"
/**
 * _strlen - that returns the length of a string
 * @s: pointer
 * Return: 0
 */
int _strlen(char *s)
{
	int ch;
	for (ch = 0; s[ch] != '0'; ++ch)
		return(ch);
}
