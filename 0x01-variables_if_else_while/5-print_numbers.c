#include <stdio.h>

/**
 * main - prints out 0 - 9
 * a new line follows
 * Return: Aways 0 (if Sucessful)
 */

int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
		printf("%d", n);
	printf("\n");
	return (0);
}
