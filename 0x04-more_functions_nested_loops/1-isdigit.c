#include "main.h"
/**
 * _isdigit- checks if the given integer is a digit
 * @c : integer value
 * Return: always returns zero
*/

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
