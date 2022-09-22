#include "main.h"
#include <stdio.h>

/**
 * cap_string - capitalizes all words of a string
 * @s: the string
 * Return: character value
 */
char *cap_string(char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; a++)
	{
		while (str[a] >= 'a' && str[a] <= 'z')
		{
			if (str[a - 1] == ' ' ||
			str[a - 1] == '\t' ||
			str[a - 1] == '\n' ||
			str[a - 1] == ',' ||
			str[a - 1] == ';' ||
			str[a - 1] == '.' ||
			str[a - 1] == '!' ||
			str[a - 1] == '?' ||
			str[a - 1] == '"' ||
			str[a - 1] == '(' ||
			str[a - 1] == ')' ||
			str[a - 1] == '{' ||
			str[a - 1] == '}' ||
			a == 0)
				str[a] = str[a] - 32;
			a++;
		}
	}
	return (str);
}
