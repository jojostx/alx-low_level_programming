#include <stdio.h>

/**
 * main - prints the letters of the alphabets.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 0;

	for (; n < 10;)
	{
		++n;
		printf("%d", n);
	}
	putchar('\n');
	return (0);
}
