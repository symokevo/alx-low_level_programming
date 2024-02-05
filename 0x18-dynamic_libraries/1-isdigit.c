#include "main.h"

/**
 * _isdigit - checks digit from 0 through 9
 * @c: test the character
 * Return: 1 if it is, 0 if not
 */

int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
	{
		return (1);
	}

	return (0);
}
