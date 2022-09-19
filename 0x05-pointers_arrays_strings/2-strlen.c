#include "main.h"

/**
 * _strlen - function that returns the length of a string
 * @s: char
 * Return: int
 */

int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}
