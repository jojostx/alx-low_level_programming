#include "main.h"

/**
 * _puts - prints string, followed by a new line, to stdout
 * @str: char
 * Return: void
 */
void _puts(char *str)
{
	int count = 0;

	while (*(str + count) != '\0')
	{
		_putchar(*(str + count));
		count++;
	}
	_putchar('\n');
}
