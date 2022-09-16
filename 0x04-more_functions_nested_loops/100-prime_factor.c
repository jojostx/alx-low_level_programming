#include <stdio.h>
#include "main.h"

/**
 * main - finds and prints the largest
 * prime factor of the number 612852475143,
 * followed by a new line
 *
 * Return: Always 0.
 */
int main(void)
{
	long int n = 612852475143;
	long int c = 2;

	while (n > 1)
	{
		if (n % c == 0)
		{
			n /= c;
		}
		else
			c++;
	}
	printf("%ld\n", c);

	return (0);
}
