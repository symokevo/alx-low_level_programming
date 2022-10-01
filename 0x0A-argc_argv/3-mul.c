#include "main.h"

/**
 * main - multiply two numbers.
 * @argc: argument count
 * @argv: argument vector pointer
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int prod;

	if (argc == 3)
	{
		prod = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", prod);
	}
	else
	{
		printf("Error\n");
	}

	return (0);
}
