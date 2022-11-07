#include <stdio.h>
/**
 * main - Entry point
 * @argv: argument vector
 * @argc: argument count
 * Return: 1
 */
int main(int argc, char *argv[])
{
	(void) argc;
	if (argv[1] && argv[2])
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
	else
		printf("Error\n");
	return (1);
}
