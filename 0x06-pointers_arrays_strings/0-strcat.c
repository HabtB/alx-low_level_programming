#include "main.h"

/**
 * _strcat- joins two strings
 * @dest: is the destination string
 * @src: is the source string
 *
 * Return: returns the concatenated string
 */

char *_strcat(char *dest, char *src)
{

	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	i++;

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
