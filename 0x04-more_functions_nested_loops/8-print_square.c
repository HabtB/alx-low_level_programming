#include "main.h"

/**
 * print_square- prints a sqaure.
 * @size: value of an integer
 *
 * Returns: none.
*/

void print_square(int size)
{
	int i;
	int j = 0;

	if (size > 0)
	{
		while (j < size)
		{
			for (i = 0; i < size; i++)
			{
				_putchar('#');
			}
			_putchar('\n');
			j++;
		}
	}
	else
		_putchar('\n');
}
