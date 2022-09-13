#include "main.h"

/**
 * _abs-computes the absolute value of an integer
 * @n: is the integer value
 *
 * Return: returns the absolute value of the number
 */

int _abs(int n)
{
	if (n > 0)
		return (n);
	else if (n == 0)
		return (0);
	else
		return (-1 * n);
}
