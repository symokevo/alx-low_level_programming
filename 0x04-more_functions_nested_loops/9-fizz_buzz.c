#include "main.h"
#include <stdio.h>

/**
 * main - print numbers from 1 - 100, followed by a new line
 * multiples of 3 print Fizz 
 * multiples of 5 print Buzz
 * Return: Always 0 (if Successful)
 */
int main(void)
{
	int i;

		for (i = 1; i <= 100; i++)
		{
			if (i % 3 == 0 && i % 5 != 0)
			{
				printf(" Fizz");
			} else if (i % 5 == 0 && i % 3 != 0)
			{
				printf(" Buzz");
			} else if (i == 1)
			{
				printf("%d", i);
			} else
			{
				printf(" %d", i);
			}
		}
		printf("\n");
		return (0);
}
