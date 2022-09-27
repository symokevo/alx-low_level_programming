#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - print sum of two diagonals of square matrix of integers
 * @size: The array size
 * @a: The array
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int sum, i, step;

	sum = 0;
	step = 0;
	for (i = 0; i < size; i++)
	{
		sum += *(a + step);
		step += size + 1;
	}
	printf("%d, ", sum);

	sum = 0;
	step = 0;
	for (i = 0; i < size; i++)
	{
		step += size - 1;
		sum += *(a + step);
	}
	printf("%d\n", sum);
}
