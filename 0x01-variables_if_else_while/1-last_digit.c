#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print the last digit of the number stored in the variable n.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, l_d;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l_d = n % 10;

	if (l_d > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, l_d);
	if (l_d == 0)
		printf("Last digit of %d is 0 and is 0\n", n);
	if (l_d != 0 && l_d < 6)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, l_d);
	return (0);
}
