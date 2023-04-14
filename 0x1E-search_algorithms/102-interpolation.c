#include "search_algos.h"

/**
 * interpolation_search - searches a value in an array using interpolation
 * @array: an array in which a value is to be searched
 * @size: size of the array
 * @value: the value to be searched
 *
 * Return: return pos upon succes; -1 otherwise
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t low, high, pos;

	low = 0;
	pos = 0;
	high = size - 1;

	if (!array)
		return (-1);

	while (pos <= high)
	{
		pos = low + ((value - array[low]) * (high - low) / (array[high] - array[low]));

		printf("Value checked array[%li] = [%d]\n", pos, array[pos]);

		if (array[pos] == value)
			return (pos);

		if (array[pos] < value)
			low = pos + 1;
		else
			high = pos - 1;
	}
	printf("Value checked array[%lu] is out of range\n", pos);
	return (-1);
}

