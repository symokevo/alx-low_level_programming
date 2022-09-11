#include <stdio.h>

/**
 * main - prints the alphabet in small caps,
 * uppercase next,
 * a new line follows
 * Return: Always 0 (if Successful)
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}

	for (ch = 'A'; ch <= 'Z'; ch++)
		putchar(ch);
	putchar('\n');

	return (0);
}