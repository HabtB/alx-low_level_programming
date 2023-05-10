#include "search_algos.h"
/**
 * search_helper - This function helps to search and print the indes
 * at which the value is found; if it is found.
 * @array: pointer to the first element of the array to search in
 * @size: the size of the array
 * @value: value to be searched
 * @index: current index of the array being searched
 *
 * Return: the index of the first occurrence of value in array,
 *         or -1 if not found
 */
int search_helper(int *array, size_t size, int value, size_t index)
{
	if (index >= size)
		return (-1);

	printf("Value checked array[%lu] = [%d]\n", index, array[index]);

	if (array[index] == value)
		return (index);

	return (search_helper(array, size, value, index + 1));
}

/**
 * linear_search - searches for a value in an array of integers
 *                 using the Linear search algorithm
 *
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: the first index where value is located, or -1 if not found
 */
int linear_search(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return (search_helper(array, size, value, 0));
}
