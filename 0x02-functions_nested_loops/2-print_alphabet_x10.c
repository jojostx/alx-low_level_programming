#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabets 10 times in lowercase
 *
 * return void
 */
void print_alphabet_x10(void)
{
	int n;
	char alp;

	for (n = 0; n < 10; n++)
	{
		alp = 'a';

		while (alp <= 'z')
		{
			_putchar(alp);
			alp++;
		}
		_putchar('\n');
	}
}
