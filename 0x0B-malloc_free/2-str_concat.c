#include "main.h"
int _strlen(char *s);

/**
 * str_concat- concatenates two strings
 * @s1: a string pointer
 * @s2: a string pointer
 *
 * Return: returns a pointer to the new string
 */

char *str_concat(char *s1, char *s2)
{
	char *array;
	unsigned int i, j, size1, size2;

	size1 = 0;
	size2 = 0;

	if (s1 != NULL)
		size1 = _strlen(s1);
	else
		size1 = 0;

	if (s2 != NULL)
		size2 = _strlen(s2);
	else
		size2 = 0;

	array = (char *)malloc((size1 + size2 + 1) * sizeof(char));

	if (array == NULL)
		return (NULL);

	if (s1 != NULL)
	{
		for (i = 0; s1[i]; i++)
			array[i] = s1[i];
	}

	if (s2 != NULL)
	{
		for (j = 0; s2[j]; j++)
			array[size1 + j] = s2[j];
	}

	array[size1 + size2] = '\0';
	return (array);
}

/**
 * _strlen- prints out the length of the specified string
 * @s: a string pointer
 *
 * Return: returns the length
 */

int _strlen(char *s)
{
	int i = 0;
	int  size = 0;

	while (s[i])
	{
		size++;
		i++;
	}

	return (size);
}
