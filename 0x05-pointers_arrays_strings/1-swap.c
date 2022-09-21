#include "main.h"

/**
 * swap_int - swaps the values of two ints.
 * @a: pointer to first value
 * @b: pointer to second value
 * Return: Always 0 if successful.
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
