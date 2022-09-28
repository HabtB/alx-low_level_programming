#include "main.h"

/**
 * _strlen_recursion- prints out a reversed string
 * @s: pointer to a string
 *
 * Return: returns length of the string
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (1 + _strlen_recursion(s + 1));

	else
		return (0);
}
