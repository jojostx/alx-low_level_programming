#include "main.h"

/**
 *  print_square - prints a square, followed by a new line
 *  @size: the size of the square made of the character #
 *  Return: void
 */

void print_square(int size)
{
	int a,b;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (a = size; a > 0; a--)
	{
		for (b = size; b > 0; b--)
		{
			_putchar(35);
		}
		if (a != size - 1)
			_putchar('\n');
	}
}
