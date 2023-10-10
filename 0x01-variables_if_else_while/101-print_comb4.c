#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point for the program.
 *
 * Description: print all possible diffrent combination of twree digits
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int n;
	int j;
	int k;

	for (n = 0; n < 8; n++)
	{
		for (j = n + 1; j <= 8; j++)
		{
			for (k = j + 1; k <= 9; k++)
			{
				putchar('0' + n);
				putchar('0' + j);
				putchar('0' + k);
				if (n != 7 || j != 8 || k != 9)
				{
					putchar (',');
					putchar (' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
