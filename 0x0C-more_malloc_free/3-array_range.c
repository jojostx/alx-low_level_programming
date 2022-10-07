#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: mininum number
 * @max: maximum number
 *
 * Return: pointer to created array
 */
int *array_range(int min, int max)
{
	int *p;
	int i;

	if (min > max)
		return (NULL);

	p = malloc(sizeof(int) * (max - min + 1));

	if (p == NULL)
		return (NULL);

	for (i = 0; min <= max; min++)
		p[i] = min;

	return (p);
}
