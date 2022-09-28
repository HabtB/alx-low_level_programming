#include "main.h"

/**
 * _sqrt- returns
 * @x: is the root integer
 * @y: the squared integer
 * Return: returns the squre root of y
 */

int _sqrt(int x, int y)
{

	if ((x * x) == y)
		return (x);

	else if ((x * x) > y)
		return (-1);

	else
		return (_sqrt((x + 1), y));
}

/**
 * _sqrt_recursion - returns the natural root of an integer
 * @n: integer value
 *
 * Return: returns the root or -1
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	else
		return (_sqrt(1, n));
}
