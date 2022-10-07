#include "main.h"
#include <stdlib.h>

/**
 * _strlen - returns the length of a string
 * @s: string
 *
 * Return: length of string
 */
unsigned int _strlen(char *s)
{
	unsigned int i = 0;

	if (s == NULL)
		return (i);

	while (*(s + i) != '\0')
		i++;

	return (i);
}

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: amount of bytes
 * Return: concatenated string pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1_len = _strlen(s1);
	unsigned int s2_len = _strlen(s2);
	unsigned int s3_len, i;
	char *s3;

	if (n < s2_len)
		s2_len = n;

	s3_len = s1_len + s2_len + 1;

	s3 = malloc(s3_len);

	if (s3 == NULL)
		return (NULL);

	for (i = 0; i < s3_len; i++)
		if (i < s1_len)
			s3[i] = s1[i];
		else
			s3[i] = s2[i - s1_len];

	s3[i] = '\0';

	return (s3);
}
