

#include <stdio.h>

/**
 * main - prints the alphabet in small caps,
 * A  new line follows
 * Return: Always 0 (if Success)
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
