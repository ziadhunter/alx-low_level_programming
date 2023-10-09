#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/*
 * main - Entry point.
 *
 * Description: Print the value of n status:
 *              greater than, is zero and is not less than 6.
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int n;
	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	m = n %;
	if (m > 5)
		printf("Last digit of %d is %d and is greater than 5", n, m);
	else if (m == 0)
		printf("Last digit of %d is %d and is", n, m);
	else
		printf("Last digit of %d is %d and is less than 6 and not 0", n, m);

	return (0);
}
