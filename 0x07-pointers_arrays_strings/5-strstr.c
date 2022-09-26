#include "main.h"

/**
 * _strcmp- compares strings
 * @s1: first string
 * @s2: secong string
 *
 * Return: returns the difference between the two
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	}

	return (0);
}

/**
 * _strstr- searches for substring
 * @haystack: pointer to check a string
 * @needle: substring
 *
 *Return: a pointer to the first byte
 */


char *_strstr(char *haystack, char *needle)
{
	int j;

	for (j = 0; haystack[j] != '\0'; j++)
	{
		if (_strcmp((haystack + j), needle) == 0)
			return (haystack + j);
	}

	return (NULL);
}
