#include "main.h"
/**
 * string_toupper - string to upper case converter
 * @str: variable
 * Return: Always 0
 */
char *string_toupper(char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; a++)
	{
		if (str[a] >= 'a' && str[a] <= 'z')
			str[a] = str[a] - 32;
	}

	return (str);
}
