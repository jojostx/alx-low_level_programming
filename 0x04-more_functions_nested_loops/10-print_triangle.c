#include "main.h"

/**
 *  print_triangle - prints a triangle, followed by a new line
 *  @size: the number of times the character '#' should be printed
 *  Return: void
 */

void print_triangle(int size)
{
	int a = 1, b;

	if (size <= 0)
	{
		_putchar('\n');
		return (0);
	}

	for (a = 1; a <= size; a++)
	{
		for (b = size - a; b > 0; b--)
		{
			_putchar(' ');
		}
		for (b = a; b > 0; b--)
		{
			_putchar('#');
		}

		_putchar('\n');
	}

	return (0);
}
