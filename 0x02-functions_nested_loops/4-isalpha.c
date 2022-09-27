#include "main.h"

/**
 * _isalpha - checks for lowercase character
 * @c: input parameter
 * Return: int
 */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c > 96 && c < 123))
	{
		return (1);
	}
	return (0);
}
