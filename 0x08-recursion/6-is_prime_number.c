#include "main.h"

/**
 * checker- checks a prime number
 * @x: is integer
 * @y: is integer
 * Return: returns 0 false, 1 true.
 */

int checker(int x, int y)
{

	if (x == y)
		return (1);

	else if ((y % x) == 0)
		return (0);

	else
		return (checker((x + 1), y));

}

/**
 * is_prime_number - tells if a number is a prime or not
 * @n: integer value
 *
 * Return: returns the integer
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (checker(2, n));
}
