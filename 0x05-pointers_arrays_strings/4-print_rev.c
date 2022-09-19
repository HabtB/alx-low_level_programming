#include <stdio.h>
#include "main.h"


/**
 * print_rev- prints a string in a reverse order
 * @s: is a pointer to a string
 *
 * Return: none
 */

void print_rev(char *s)
{

	int len = 0;
	int c = len;
	char *cs = s;

	while (*cs)
	{
		len++;
		cs++;
	}

	c = len;
	for (c = len - 1; c >= 0; c--)
	{
		_putchar(*(s + c));
	}
	_putchar('\n');
}
