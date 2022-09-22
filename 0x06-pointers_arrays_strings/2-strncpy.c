#include "main.h"
/**
 * _strncpy - a function copies string
 * @src: source variable
 * @n: integer variable
 * @dest: destination variable
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
		return (dest);
}
