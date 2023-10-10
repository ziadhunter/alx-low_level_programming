#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point for the program.
 *
 * Description: print all possible diffrent combination of two digits
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int n;
	int j;

	for (n = 0; n < 9; n++)
	{
		for (j = n + 1; j <= 9; j++)
		{
			putchar('0' + n);
			putchar('0' + j);
		}
		if (n != 8 && j != 9)
		{
			putchar (',');
			putchar (' ');
		}
	}
	putchar('\n');

	return (0);
}
