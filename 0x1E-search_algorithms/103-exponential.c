# include "search_algos.h"
# include <math.h>

/**
* binary_search_exp - searches a value in a sorted array using
* a modified binary search
*
* @array: the array in which we are going to search the value in
* @low: the lowest position in the array, at which the search starts
* @high: the highest position in the array, upto which the search is carried
* @value: the integer we are going to search
*
*  Return: returns the position at which the value is found, if not returns -1
*/
int binary_search_exp(int *array, size_t low, size_t high, int value)
{
	size_t i;
	size_t mid = 0;

	if (!array)
		return (-1);

	while (low <= high)
	{
		printf("Searching in array: ");
		for (i = low; i <= high; i++)
		{
			printf("%d", array[i]);
			if (i != high)
				printf(", ");
		}
		printf("\n");

		mid = (low + high) / 2;

		if (value == array[mid])
			return (mid);

		if (value < array[mid])
			high = mid - 1;
		else
			low = mid + 1;
	}

	return (-1);
}

/**
* exponential_search - searches for a value inside the given array using
* exponential_search algorithm
*
* @array: the array in which the value is searched
* @size: is the size of the array
* @value: is the value we search for
*
* Return: return the position in the array at which the value is found
*/

int exponential_search(int *array, size_t size, int value)
{
	size_t pos = 1, new_pos, init_pos;

	if (array == NULL || size == 0)
		return (-1);

	while (array[pos] < value && pos < size)
	{
		printf("Value checked array[%li] = [%d]\n", pos, array[pos]);
		if (array[pos] == value)
			return (pos);
		pos *= 2;
	}
	init_pos = pos / 2;
	pos = (pos <= (size - 1) ? pos : (size - 1));
	printf("Value found between indexes [%li] and [%li]\n", init_pos, (pos));

	new_pos = binary_search_exp(array, init_pos, pos, value);
	return (new_pos);
}
