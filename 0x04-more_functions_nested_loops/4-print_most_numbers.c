#include "main.h"

/**
 *  print_most_numbers - print out numbers 0 to 9 except 2 and 4
 *  Return: void
 */

void print_most_numbers(void)
{
	int n = 48;

	while (n < 58)
	{
		if (n != 2 || n != 4)
			_putchar(n);

		n++;
	}
	_putchar('\n');
}
