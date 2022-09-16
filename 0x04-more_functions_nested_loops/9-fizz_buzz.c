#include <stdio.h>
#include "main.h"

/**
 * main - a program that prints the numbers from 1 to 100,
 * * followed by a new line. But for multiples of 3 print Fizz instead
 * of the number and for the multiples of 5 print Buzz.
 * For numbers which are multiples of both three and five print FizzBuzz.
 * Each number or word should be separated by a space *
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if (n % 3 == 0 && n % 5 == 0)
		{
			printf("Fizz");
			printf("Buzz");
		}
		else if (n % 3 == 0)
		{
			printf("Fizz");
		}
		else if (n % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			if (n >= 10)
				putchar((n / 10) + 48);
			putchar((n % 10) + 48);
		}

		if (n != 100)
			putchar(' ');
	}
	putchar('\n');

	return (0);
}
