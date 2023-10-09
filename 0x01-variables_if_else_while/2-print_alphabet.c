#include <stdio.h>

/**
 * main - Entry point for the program.
 *
 * Description; print all alphabetletters
 *
 * Return: always 0 (success)
 */

int main(void)
{
	char i = 'a';

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	putchar("\n");

	return (0);
}
