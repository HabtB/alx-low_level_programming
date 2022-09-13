#include "main.h"
/**
 * print_last_digit- prints the last digit and also returns the digit
 * @c: is the value of the integer
 *
 * Return: always returns the last digit of the given number
 */

int print_last_digit(int c)
{
	char d = c % 10;

	if (d > 0)
	{
		_putchar('0' + d);
		return (d);
	}
	else
	{
		_putchar('0' + (-1 * d));
		return (-1 * d);
	}
}
