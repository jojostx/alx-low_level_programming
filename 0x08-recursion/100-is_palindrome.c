#include "main.h"

int comparator(char *str, int l, int r);
int _strlen_recursion(char *s);

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to check
 *
 * Return: 1 if s is a palindrome and 0 if not
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
	{
		return (1);
	}

	return (comparator(s, 0, _strlen_recursion(s) - 1));
}

/**
 * comparator - compares each character of the string.
 * @s: string
 * @n1: smallest iterator.
 * @n2: biggest iterator.
 * Return: int
 */
int comparator(char *s, int n1, int n2)
{
	if (*(s + n1) == *(s + n2))
	{
		if (n1 == n2 || n1 == n2 + 1)
			return (1);
		return (0 + comparator(s, n1 + 1, n2 - 1));
	}
	return (0);
}

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
