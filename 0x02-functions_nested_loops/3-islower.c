#include "main.h"

/**
 * _islower - checks for lowercase character
 * @c: input parameter
 * Return: int
 */
int _islower(int c)
{
	if (c > 96 && c < 123)
	{
		return (1);
	}
	return (0);
}
