#include "main.h"

/**
 * _print_rev_recursion- prints out a reversed string
 * @s: pointer to a string
 *
 * Return: returns nothing
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
		_print_rev_recursion(s + 1);

	else
		return;

	_putchar(*s);

}
