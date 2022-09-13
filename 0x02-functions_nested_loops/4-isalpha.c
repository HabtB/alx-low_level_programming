#include "main.h"

/**
 * _isalpha- checks whether a given char is an alphabet or not
 * @c: integer value
 *
 * Return: always returns zero
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
