#include <stdio.h>
/**
 * main - prints the small caps alphabet in reverse,
 * a new line follows
 * Return: Always 0 (if Successful)
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
