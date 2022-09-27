#include "main.h"

/**
 * print_alphabet - Prints the alphabet in lowercase
 *
 * Return: No need
 */
void print_alphabet(void)
{
	char alp = 'a';

	while (alp <= 'z')
	{
		_putchar(alp);
		alp++;
	}
	_putchar('\n');
}
