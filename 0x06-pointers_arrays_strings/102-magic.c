#include <stdio.h>

/*
 * main - main function (program entry)
 * @n: integer variable
 * @a: integer variable
 * @p: integer pointer variable
 * Return: 0 if successful
 */

int main(void)
{
	int n;
	int a[5];
	int *p;

	a[2] = 1024;
	  p = &n;


	*(p + 5) = 98;
	/* ...prints 98\n */

	printf("a[2] = %d\n", a[2]);

	return (0);
}
