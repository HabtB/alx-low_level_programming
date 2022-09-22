#include "main.h"

/**
 * _strncpy- copies from one to the other
 * @dest: is the destination string
 * @src: is the source string
 * @n: value of an integer
 *
 * Return: returns the concatenated string
 */

char *_strncpy(char *dest, char *src, int n)
{

	int j = 0;

	while ((j < n) && (src[j] != '\0'))
	{
		dest[j] = src[j];
		j++;
	}

	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}
	return (dest);
}
