#include "main.h"
#include <stdlib.h>

/**
 * _strlen - returns the length of a string
 * @str: string to count
 *
 * Return: length of string
 */
int _strlen(char *str)
{
	int i = 0;

	while (str != NULL && str[i] != '\0')
	{
		i++;
	}

	return (i);
}

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to the concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr_str;
	int size, l1, l2, a, i;

	l1 = _strlen(s1);
	l2 = _strlen(s2);
	size = l1 + l2 + 1;

	ptr_str = (char *)malloc(sizeof(char) * size);

	if (ptr_str == NULL)
	{
		free(ptr_str);
		return (NULL);
	}

	for (a = 0; a < l1; a++)
		ptr_str[a] = s1[a];

	i = l2;

	for (l2 = 0; l2 <= i; l2++, a++)
		ptr_str[a] = s2[l2];

	return (ptr_str);
}
