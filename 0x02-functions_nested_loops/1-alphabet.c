#include "main.h"

/**
 * main - Entry point for the program.
 *
 * Description: Print the lowercase alphabet letters from 'a' to 'z'.
 *
 * Return: Always 0 (success)
 */

void print_alphabet(void)
{
	int e;

	for (e = 'a'; e <= 'z'; e++)
		_putchar(e);
	_putchar('\n');
}
