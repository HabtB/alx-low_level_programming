#include "search_algos.h"

/**
* jump_search - it searches for value, by jumping
* @array: array of integers
* @size: size of an array
* @value: the value to be searched
*
* Return: returns the position of the array if found; otherwise -1
*/

int jump_search(int *array, size_t size, int value)
{
	size_t n = sqrt(size), i = 0, j = 0;

	if (array == NULL || size == 0)
		return (-1);

	while (i < size && array[i] < value)
	{
		printf("Value checked array[%li] = [%d]\n", i, array[i]);
		i = i + n;
	}

	j = i - n;
	printf("Value found between indexes [%li] and [%li]\n", (i - n), i);

	while (i < size && j <= i)
	{
		printf("Value checked array[%li] = [%d]\n", j, array[j]);
		if (array[j] == value)
			return (j);
		j++;
	}

	return (-1);
}
