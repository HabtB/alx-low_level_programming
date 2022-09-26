#include "main.h"

/**
 * _strpbrk- looks for a string
 * @s: pointer to check a string
 * @accept: byte to check
 *
 * Return: a pointer to the byte that matches it
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int count, i;

	for (count = 0; s[count] != '\0'; count++)
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (s[count] == accept[i])
				return (s + count);
		}
	}
	return (NULL);
}
