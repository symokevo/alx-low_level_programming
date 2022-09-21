#include "main.h"

/**
 * _strcpy - copies string pointed to by src
 * @dest: pointer to the buffer in which the string is copied
 * @src: string to be copied
 * Return: the pointer to be tested
 */

char *_strcpy(char *dest, char *src)
{
	int len, i;

	len = 0;

	while (src[len] != '\0')
	{
		len++;

	}

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];

	}

	dest[i] = '\0';
		return (dest);
}
