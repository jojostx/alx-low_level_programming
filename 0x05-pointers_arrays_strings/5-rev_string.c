#include "main.h"

/**
 * rev_string - reverses a string
 * @s: char
 * Return: void
 */
void rev_string(char *s)
{
	int count = 0;
	int i;

	while (*(s + count) != '\0')
	{
		count++;
	}

	for (i = 0; i < count; i++)
	{
		char temp = s[count - 1];

		s[count - 1] = s[i];
		s[i] = temp;
		count--;
	}
}
