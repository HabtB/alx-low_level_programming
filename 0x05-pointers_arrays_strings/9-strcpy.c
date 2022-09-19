#include <stdio.h>
#include "main.h"

/**
 * _strcpy- copies a string
 * @dest: char pointer
 * @src: source of the string to be copied
 *
 * Return: return a char
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
