#include "main.h"

/**
 * _isdigit - checks for a digit (0 through 9)
 *  @c: integer
 *  Return: 1 if is an c is digit, 0 in other case
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
