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
	int size;
	int a = 0;
	int i = 0;

	size = _strlen(s1) +  _strlen(s2) + 1;

	ptr_str = (char *)malloc(sizeof(char) * size);

	if (ptr_str == NULL)
	{
		free(ptr_str);
		return (NULL);
	}

	while (s1[i] != '\0')
	{
		ptr_str[i] = s1[i];
		i++;
	}

	while (s2[a] != '\0')
	{
		ptr_str[i] = s2[a];
		i++;
		a++;
	}

	return (ptr_str);
}
