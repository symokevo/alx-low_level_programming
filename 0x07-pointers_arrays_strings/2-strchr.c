#include "main.h"
#include <stdio.h>
/**
 * _strchr - locates a character
 * @s: string with the characher
 * @c: character to search
 *
 * Return: pointer
 */
char *_strchr(char *s, char c)
{
	int i;
	char *found = NULL;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			found = &s[i];
			break;
		}
	}

	if (found == NULL && c == '\0')
		found = &s[i];

	return (found);
}
