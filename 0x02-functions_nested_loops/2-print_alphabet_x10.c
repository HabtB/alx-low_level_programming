#include <stdio.h>
#include "main.h"

/**
 *print_alphabet_x10- prints the alphabets ten times
 *
 *Return: always returns zero.
 */

void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)
	{
		char a = 'a';

		for (; a <= 'z'; a++)
			_putchar(a);
		_putchar('\n');
		i++;
	}
}
