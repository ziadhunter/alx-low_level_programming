#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point for the program.
 *
 * Description: print all single digit numbers of base 10
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
		putchar('0' + n);
	putchar('\n');

	return (0);
}

