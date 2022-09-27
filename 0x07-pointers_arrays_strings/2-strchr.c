#include "main.h"


/**
 * _strchr- checks for char
 * @s: pointer to a character
 * @c: character to check
 *
 * Return: returns the pointer at which
 * the character occured for the first time
 */

char *_strchr(char *s, char c)
{
	do {
		if (*s == c)
			return (s);
	} while (s++);

	return (NULL);
}
