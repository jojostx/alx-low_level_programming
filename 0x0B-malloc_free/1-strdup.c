#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to newly allocated memory,
 * which contains a copy of the string given as a parameter
 * @str: string to duplicate
 *
 * Return: pointer to string duplicate
 */
char *_strdup(char *str)
{
	char *ptr_str;
	int i = 0;

	if (str == NULL)
		return (NULL);

	while (str[i] != '\0')
	{
		i++;
	}

	ptr_str = (char *)malloc(sizeof(char) * i);

	if (ptr_str == NULL)
		return (NULL);

	i = 0;

	while (str[i] != '\0')
	{
		ptr_str[i] = str[i];
		i++;
	}

	return (ptr_str);
}
