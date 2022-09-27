#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 * @s: string to copy
 * @to: pointer to string variable to be updated
 * Return: nothing
 */
void set_string(char **s, char *to)
{
	*s = to;
}
