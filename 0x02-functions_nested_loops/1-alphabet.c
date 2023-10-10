#include "main.h"

/**
 * print_alphabet - Print the lowercase alphabet from 'a' to 'z'.
 *
 * Description: This function prints the alphabet in lowercase.
 *
 * Return: void (no return value)
 */

void print_alphabet(void)
{
	int e;

	for (e = 'a'; e <= 'z'; e++)
		_putchar(e);
	_putchar('\n');
}
