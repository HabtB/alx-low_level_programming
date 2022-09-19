#include <stdio.h>
#include "main.h"


/**
 * puts2- prints one char out of two.
 * @s: is a pointer to a string
 *
 * Return: none
 */

void puts2(char *s)
{

	int i = 0;
	int j = 0;


	while (s[i] != 0)
	{
		i++;
		j++;
	}

	for (i = 0; i <= j - 1; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(s[i]);
		}
	}
	_putchar('\n');
}
