#include "search_algos.h"

/**
 * interpolation_search - function that searches for a value in a sorted
 * array of integers using the Interpolation search algorithm
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: the value to search for
 *
 * Return: the first index where value is located, if value is not present
 * in array or if array is NULL, your function must return -1
 */
int interpolation_search(int *array, size_t size, int value)
{
	int low, high;
	size_t pos;

	if (array == NULL || size <= 0)
		return (-1);

	low = 0;
	high = size - 1;

	while (low <= high)
	{
		pos = low +
			(((double)(high - low) /
			  (array[high] - array[low])) * (value - array[low]));

		printf("Value checked array[%d]", (int)pos);

		if (pos >= size)
		{
			printf(" is out of range\n");
			break;
		}
		else
		{
			printf(" = [%d]\n", array[pos]);
		}

		if (array[pos] == value)
			return ((int) pos);
		else if (array[pos] < value)
			low = pos + 1;
		else
			high = pos - 1;
	}

	return (-1);
}
