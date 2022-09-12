#include <stdio.h>

/**
 * main - prints the letters of the alphabets.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 48;

	for (; n < 58; n++)
	{
		putchar(n);
		if (n != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
