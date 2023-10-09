#include <stdio.h>

/**
 * main - Entry point for the program.
 *
 * Description; print all alphabet letters in reverse
 *
 * Return: always 0 (success)
 */

int main(void)
{
	char i;

	for (i = 'z'; i >= 'a'; i--)
	{
		putchar(i);
	}
	putchar('\n');

	return (0);
}

