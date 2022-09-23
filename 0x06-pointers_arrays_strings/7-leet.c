#include "main.h"

/**
 * *leet - encodes a string into 1337
 * *@a: input array to modify
 * Return: encode string
 */

char *leet(char *a)
{
	int i = 0, j;
	char letters[] = {"aAeEoOtTlL"};
	char numbers[] = {"4433007711"};

	while (a[i] != '\0')
	{
		j = 0;
		while (letters[j] != '\0')
		{
			if (a[i] == letters[j])
				a[i] = numbers[j];
			j++;
		}
		i++;
	}
	return (a);
}
