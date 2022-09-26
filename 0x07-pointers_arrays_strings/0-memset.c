#include "main.h"


/**
 * _memset- fills the memory with a chosen constant
 * @s: pointer to a character
 * @b: byte chosen to fill
 * @n: the length of the characters to be filled
 *
 * Return: returns the pointer to the character
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
