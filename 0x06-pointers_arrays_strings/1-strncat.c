#include "main.h"
/**
 * _strncat - a function concatenates two strings
 * @src: source variable
 * @n: integer variable
 * @dest: destination variable
 * Return: destination string
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
