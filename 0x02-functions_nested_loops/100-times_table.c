#include <stdio.h>
#include "main.h"
/**
 * print_times_table- prints the product of numbers ranging from 1 to 9
 * @n: integer value
 * Return: retuns nothing
 */
void print_times_table(int n)
{
	if (n <= 15 && n > 0)
	{	int x = 0;

		for (; x <= n; x++)
		{	int y = 0;

			_putchar('0');
			for (; y <= n; y++)
			{	int z;
				if (y >= 1 && x == 0)
				{	_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar('0');
				}
				z = x * y;
				if (z >= 100)
				{	_putchar(' ');
					_putchar((z / 100) + '0');
					_putchar(((z % 100) / 10) + '0');
					_putchar(((z % 100) % 10) + '0');
				}
				else if (z >= 10)
				{	_putchar(' ');
					_putchar(' ');
					_putchar((z / 10) + '0');
					_putchar((z % 10) + '0');
				}
				else if (z > 0)
				{	_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(z + '0');
				}
				if (y < n)
					_putchar(',');
			}
		_putchar('\n');
		}
	}
}
