#include "main.h"

/*
 * main - prints _putchar, followed by a new line
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 0;
	char word[] = "_putchar";

	while (i < 8)
	{
		_putchar(word[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
