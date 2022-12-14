#include "main.h"

/**
 * puts2 - reverses a string
 *
 * @str: string to reverse
 *
 * Return: Always 0.
 */


void puts2(char *str)
{
	int l, i;

	l = 0;

	while
		(str[l] != '\0')
	{
		l++;

	}

	for (i = 0; i < l; i += 2)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
