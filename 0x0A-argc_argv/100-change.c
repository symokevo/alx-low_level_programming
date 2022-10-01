#include "main.h"

/**
 * main - prints min number of coins to make change
 * @argc: The argument count
 * @argv: The argument vector pointer
 * Return: 0 on success, 1 otherwise
 */
int main(int argc, char *argv[])
{
	int cents, amount;
	int flag;

	flag = 0;
	if (argc == 2)
	{
		cents = atoi(argv[1]);
		if (cents > 0)
			amount = change(cents);
		else
			amount = 0;
		printf("%d\n", amount);
	}
	else
	{
		printf("Error\n");
		flag = 1;
	}
	return (flag);
}

/**
 * change - find change
 * @cents: number of cents
 * Return: int
 */
int change(int cents)
{
	int divisors[] = {25, 10, 5, 2, 1};
	int amount;
	int i;

	amount = 0;
	for (i = 0; i < 5; i++)
	{
		amount += cents / divisors[i];
		cents = cents % divisors[i];
	}
	return (amount);
}
