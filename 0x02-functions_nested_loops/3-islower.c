#include "main.h"

/**
 * _islower- checks if a given char is lower case or otherwise
 *
 * @c : integer value
 * Return: always returns zero
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
