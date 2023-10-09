#include <stdio.h>

/**
 * main - Entry point for the program.
 *
 * Description; print all numbers of base 16 in lowercase
 *
 * Return: always 0 (success)
 */

int main(void)
{
	char i;
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar('0' + n);
	}
	for (i = 'a'; i <= 'f'; i++)
	{
		putchar(i);
	}
	putchar('\n');

	return (0);
}

