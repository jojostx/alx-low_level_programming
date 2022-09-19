#include "main.h"

/**
 * print_rev - prints a string, in reverse,
 * followed by a new line
 * @s: char
 * Return: void
 */
void print_rev(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
	{
		count++;
	}

	while (*s != s[count])
	{
		_putchar(s[count]);
		count--;
	}
	_putchar('\n');
}
