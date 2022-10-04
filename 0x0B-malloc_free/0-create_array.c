#include "main.h"

/**
 * create_array- creates array of size - size
 * @size: size of the array
 * @c: array of chars
 *
 * Return: returns the character array
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	array = (char *)malloc(size * sizeof(char));

	if (size == 0 || array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}
