#include <stdio.h>
/**
 * main - that prints the number of arguments passed into it
 * @argc: argument count
 * @argv: arguments passed to main as an array of strings
 * Return: 0
 */
int main(int argc, char **argv)
{
	(void)argc;
	printf("%d\n", argc - 1);
	return (0);
}
