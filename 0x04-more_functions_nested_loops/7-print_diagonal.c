#include "main.h"

/**
 *  print_diagonal - draws a diagonal line on the terminal
 *  @n: the number of times the character \ should be printed
 *  Return: void
 */

void print_diagonal(int n)
{
	while (n > 0)
	{
		_putchar(92);
		n--;
	}
	_putchar('\n');
}
