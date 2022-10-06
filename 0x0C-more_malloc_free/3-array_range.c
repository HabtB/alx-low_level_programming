#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of values b/n min and max
 * @min: the minimum value of the array
 * @max: the maximum value of the array
 *
 * Return: returns the array
 */

int *array_range(int min, int max)
{
	int *array;
	int i = 0, size;

	size = max - min + 1;
	if (size < 0)
		return (NULL);

	array = malloc(size * sizeof(int));

	if (array == NULL)
		return (NULL);

	while (i < size)
	{
		array[i] = min + i;
		i++;
	}
	return (array);
}
