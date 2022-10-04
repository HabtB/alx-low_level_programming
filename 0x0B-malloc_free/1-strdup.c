#include "main.h"

/**
 * _strdup- creates a string duplicate
 * @str: a string pointer
 *
 * Return: returns a pointer to the string chars
 */

char *_strdup(char *str)
{
	char *array;
	unsigned int i, size = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
	{
		size++;
	}

	array = (char *)malloc((size + 1) * sizeof(char));

	if (size == 1 || array == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		array[i] = str[i];

	array[size] = '\0';
	return (array);
}
