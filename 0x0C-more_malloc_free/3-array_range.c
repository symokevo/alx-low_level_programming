#include "main.h"

/**
 * array_range - create an array of integers.
 * @min: minimum value
 * @max: maximum value
 * Return: pointer
 */
int *array_range(int min, int max)
{
	int *ptr = NULL;
	int size, i;

	if (min <= max)
	{
		size = max - min + 1;
		ptr = malloc(size * sizeof(int));
		if (ptr != NULL)
		{
			for (i = 0; min <= max; i++, min++)
				ptr[i] = min;
		}
	}
	return (ptr);
}
