#include <stdio.h>

/**
 * main - prints the alphabet in small caps,
 * ommit e and q
 * a new line follows
 * Return: Always 0 (if Successful)
 */

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
		ch++;
	}
	putchar('\n');
	return (0);
}
