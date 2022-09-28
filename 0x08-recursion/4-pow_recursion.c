#include "main.h"

/**
 * _pow_recursion- returns x to the power of y
 * @x: integer value
 * @y: power
 * Return: returns x raised to y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	else if (y == 0)
		return (1);

	else if (y == 1)
		return (x);

	else
		return (x * _pow_recursion(x, y - 1));
}
