#include "main.h"

/**
 * largest_number - returns the largest of three numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b)
	{
		if (a >= c)
			largest = a;
		else if (a < c)
			largest = c;
	}
	else if (a < b)
	{
		if (b >= c)
			largest = b;
		else if (b < c)
			largest = c;
	}
	else
	{
		if (c > a)
			largest = c;
		else
			largest = a;
	}
	return (largest);
}
