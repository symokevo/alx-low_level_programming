#include "main.h"

/**
 * _puts_recursion - print string, a new line follows
 * @s: The string to be printed
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(*(s));
	_puts_recursion((++s));
}
