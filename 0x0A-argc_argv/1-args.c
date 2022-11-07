#include <stdio.h>
/**
 * main - that prints the number of arguments passed into it
 * @argc: argument count
 * @srgv: arguments passed to main as an array of strings
 * Return: 0
 */
int main(int argc __attribute__((unused)), char **argv)
{
	int i;
	for (i = 0; i < argc; argv[i])
	{
		printf("%s\n", argv[i]);
	}
}
