#include "main.h"
/**
 * _memset - fuction to fill memory
 * @n: size of memory area to fill
 * @b: byte to be used
 * @s: char pointer
 * Return: pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);
}
