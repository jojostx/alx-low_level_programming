#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: string to count
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	int len = 1;

	if (*s == '\0')
	{
		return (0);
	}

	len = len +  _strlen_recursion(s + 1);

	return (len);

}
