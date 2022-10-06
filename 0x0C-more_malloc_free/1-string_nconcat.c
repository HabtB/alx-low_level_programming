#include "main.h"
#include <stdlib.h>

int _strlen(char *str);

/**
 * string_nconcat - concatinates n strings from s2 to s1.
 * @s1: the first string
 * @s2: the second string
 * @n: the number of chars to be copied
 *
 * Return: returns 0 on success and I on failure
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	int i = 0, lens1, lens2, lenTotal;

	lens1 = _strlen(s1);
	lens2 = _strlen(s2);
	lenTotal = lens1 + n + 1;

	ptr = malloc(lenTotal * sizeof(*ptr));
	if (ptr == NULL)
		exit(1);

	while (i < lenTotal)
	{
		if (s1[i] != 0)
			ptr[i] = s1[i];
		else
		{
			int j = 0;

			while (j < n)
			{
				ptr[i] = s2[j];
				j++;
				i++;
			}
		}
		i++;
	}
	ptr[lenTotal] = '\0';

	return (ptr);
}

/**
 * _strlen - computes the length of the string
 * @str: a pointer to string
 *
 * Return: returns 0 upon success
 *
 */

int _strlen(char *str)
{
	int count = 0;

	if (*str == '\0')
		return (0);

	while (*str)
	{
		str++;
		count++;
	}

	return (count);
}
