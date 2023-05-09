#include "search_algos.h"

/**
 * linear_search - searches for the value given as an argument in an array
 * @array: the array to be searched
 * @size: the size of the array
 * @value: the value to be searched in the array
 *
 * Return: it returns an int/the index at which the value is found if
 * succeeded; otherwise -1
*/

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
