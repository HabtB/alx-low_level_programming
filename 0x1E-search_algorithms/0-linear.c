#include "search_algos.h"

/**
* linear_search - searches a value in an array
* @array: a given array in which we are going to search for a value
* @size: the size of the array
* @value: the value that is searched in the array
*
* Return: returns an int
*/

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (!array || size == 0)
		return (-1);

	for (; i < size; i++)
	{
		printf("Value checked array[%li] = [%d]\n", i, array[i]);

		if (array[i] == value)
			return (i);
	}
	return (-1);
}
