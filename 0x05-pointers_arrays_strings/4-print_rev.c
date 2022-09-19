#include "main.h"

/**
 * _print_rev - prints a string, in reverse,
 * followed by a new line
 * @s: char
 * Return: void
 */
void _puts(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
	{
		count++;
	}

	while (*s != s[count - 1])
	{
		_putchar(*(s + count));
		count--;
	}
	_putchar('\n');
}
