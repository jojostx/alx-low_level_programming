#include "main.h"

/**
 * print_fizz - prints "Fizz"
 *
 * Return: void
 */
void print_fizz(void)
{
	_putchar('F');
	_putchar('i');
	_putchar('z');
	_putchar('z');
}

/**
 * print_buzz - prints "Buzz"
 *
 * Return: void
 */
void print_buzz(void)
{
	_putchar('B');
	_putchar('u');
	_putchar('z');
	_putchar('z');
}
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
			print_fizz();
			print_buzz();
		}
		else if (n % 3 == 0)
		{
			print_fizz();
		}
		else if (n % 5 == 0)
		{
			print_buzz();
		}
		else
		{
			if (n >= 10)
				_putchar((n / 10) + 48);
			_putchar((n % 10) + 48);
		}

		if (n != 100)
			_putchar(' ');
	}

	return (0);
}
