#include "search_algos.h"

/**
 * jump_search - searches for a value in a sorted array of integers
 * using the Jump search algorithm
 *
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: index of the number
 */
int jump_search(int *array, size_t size, int value)
{
	size_t m, i;

	m = 0;

	while (value >= array[m] && m < size)
	{
		printf("Value checked array[%lu] = [%d]\n", m, array[m]);

		i = m;
		m += sqrt(size);

		if (m > size - 1)
			return (-1);
	}

	printf("Value found between indexes [%lu] and [%lu]\n", i, m);

	for (; i < m; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);

		if (array[i] == value)
			return (i);
	}

	return (-1);
}
