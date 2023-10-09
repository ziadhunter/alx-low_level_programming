#include <stdio.h>

/**
 * main - Entry point for the program.
 *
 * Description; print all alphabetletters except q and e
 *
 * Return: always 0 (success)
 */

int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
		if (i = 'e' || i = 'q')
			continue;
	}
	putchar("\n");

	return (0);
}
~
~
~

