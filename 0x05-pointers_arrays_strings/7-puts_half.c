#include <stdio.h>
#include "main.h"


/**
 * puts_half- prints half of the characters of the string.
 * @s: is a pointer to a string
 *
 * Return: none
 */

void puts_half(char *s)
{

	int i = 0;
	int j = 0;


	while (s[i] != 0)
	{
		i++;
		j++;
	}

	if (i % 2 == 0)
	{
		for (i = j / 2; i < j; i++)
		{
			_putchar(s[i]);
		}
	}
	else
	{
		for (i = (j + 1) / 2; i < j; i++)
		{
			_putchar(s[i]);
		}
	}
	_putchar('\n');
}
