#include "main.h"

/**
 * _strlen - function that returns the length of a string
 * @s: char
 * Return: int
 */

int _strlen(char *s)
{
	int size = sizeof(s) / sizeof(*s);

	return (size);
}
