#include "function_pointers.h"

/**
 * array_iterator- function that executes a function given as a parameter
 * @array: parameter for array
 * @size: parameter for size
 * @action: parameter for action
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x = 0;

	if (array != NULL && action != NULL && size > 0)
	{
		while (x < size)
		{
			action(array[x]);
			x++;
		}
	}
}
