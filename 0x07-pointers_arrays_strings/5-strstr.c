#include "main.h"

/**
 * _strstr - function that locates a substring; finds the first
 * occurrence of the substring needle in the string haystack,
 * the terminating null bytes (\0) are not compared.
 * @haystack: string to search in
 * @needle: string to search for
 * Return: pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j;
	int found_count = 0;

	for (i = 0; *(haystack + i) != '\0'; i++)
	{
		for (j = 0; *(needle + j) != '\0'; j++)
		{
			if (*(haystack + i) == *(needle + j))
			{
				found_count += 1;
			}
			else
			{
				found_count = 0;
				j = 0;
				break;
			}
		}
	}

	if (found_count != 0)
	{
		for (i = 0; *(haystack + i) != '\0'; i++)
		{
			if (*(haystack + i) == *needle)
				return ((haystack + i));
		}
	}

	return ('\0');
}
