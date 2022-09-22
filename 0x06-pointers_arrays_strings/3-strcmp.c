#include "main.h"

/**
 * _strcmp- copies from one to the other
 * @s1: is the destination string
 * @s2: is the source string
 *
 * Return: returns the concatenated string
 */

int _strcmp(char *s1, char *s2)
{

	int j = 0;

	while ((s1[j] != '\0') && (s2[j] != '\0'))
	{
		if (s1[j] != s2[j])
			return (s1[j] - s2[j]);
		j++;
	}

	return (0);
}
