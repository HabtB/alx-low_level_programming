#include "search_algos.h"

/**
* binary_search - searches a value in a sorted array using binary search
* @array: a given array in which we are going to search for a value
* @size: the size of the array
* @value: the value that is searched in the array
*
* Return: returns the position of the value when found, -1 otherwise
*/

int binary_search(int *array, size_t size, int value)
{
	size_t left, right, mid, i;

	right = size - 1;
	left = 0;

	if (!array)
		return (-1);

	while (left <= right)
	{

		printf("Searching in array: ");

		for (i = left; i <= right; i++)
		{
			printf("%d", array[i]);
			if (i != right)
				printf(", ");
		}
		printf("\n");

		mid = (left + right) / 2;
		if (array[mid] == value)
			return (mid);

		if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}
	return (-1);
}
