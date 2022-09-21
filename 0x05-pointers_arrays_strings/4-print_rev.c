#include "main.h"

/**
 * print_rev - prints a string, in its reverse, follows a new line
 * @s: string to reverse
 * Return: 0.
 */

void print_rev(char *s)
{
	int i, l;

	i = 0;

	while
		(s[i] != '\0')
		{
			i++;
		}
	l = i - 1;

	for (i = l; i >= 0; i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}
