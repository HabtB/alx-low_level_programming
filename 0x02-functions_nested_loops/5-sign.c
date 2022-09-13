#include "main.h"
/**
 * print_sign- print the sign of the number and returns 1
 * if the number is positive, 0 if zero or -1 if negative.
 *
 * @c: is the integer value
 * Return: always returns zero
 */

int print_sign(int c)
{
	if (c > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (c == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
