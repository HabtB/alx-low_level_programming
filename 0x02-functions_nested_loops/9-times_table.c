#include "main.h"

/**
 * times_table-prints the product of numbers ranging from 1 to 9
 *
 * Return: retuns nothing
 */

void times_table(void)
{
	int x = 0;

	for (; x <= 9; x++)
	{
		int y = 0;

		for (; y <= 9; y++)
		{
			if ((x * y) / 10 >= 1)
				_putchar(((x * y) / 10) + '0');

			else if (x >= 0 && y != 0)
				_putchar(' ');

			_putchar(((x * y) % 10) + '0');

			if (y < 9)
			{
				_putchar(',');
				_putchar(' ');
			}

		}
	_putchar('\n');
	}
}
